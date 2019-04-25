#include "DetectorSD.h"
#include "G4VProcess.hh"
#include "G4PrimaryParticle.hh"
#include "PrimaryParticleInformation.h"

DetectorSD::DetectorSD(G4String name, G4int scinSum, G4double timeMergeValue )
    :G4VSensitiveDetector(name), totScinNum(scinSum), timeIntervals(timeMergeValue)
{
     collectionName.insert("detectorCollection");

    for (G4int i=0; i<=totScinNum; i++)
    {
        previousHitID.push_back(-1);
        previousHitTime.push_back(0.);
        previousHitsEnergySum.push_back(0.);
    }

}

DetectorSD::~DetectorSD()
{}

void DetectorSD::Initialize(G4HCofThisEvent* HCE)
{
    static int HCID = -1;
    fDetectorCollection = new DetectorHitsCollection(SensitiveDetectorName,collectionName[0]);

    if(HCID<0)
    { HCID = GetCollectionID(0); }
    HCE->AddHitsCollection(HCID,fDetectorCollection);

    for (G4int i=0; i<=totScinNum; i++)
    {
        previousHitID[i] = -1;
        previousHitTime[i] = 0.;
        previousHitsEnergySum[i] = 0.;
    }

}



G4bool DetectorSD::ProcessHits(G4Step* aStep, G4TouchableHistory* )
{
    G4double edep = aStep->GetTotalEnergyDeposit();

    if(edep==0.0) return false;

    G4TouchableHistory* theTouchable  = (G4TouchableHistory*)(aStep->GetPreStepPoint()->GetTouchable()); 
    G4VPhysicalVolume* physVol = theTouchable->GetVolume();
    G4int   currentScinCopy = physVol->GetCopyNo();
    G4double currentTime = aStep->GetPreStepPoint()->GetGlobalTime();


    if( (previousHitID[currentScinCopy] !=-1 )
          &&( abs(previousHitTime[currentScinCopy]-currentTime)<timeIntervals) ) 
    {
        // update track
        (*fDetectorCollection)[previousHitID[currentScinCopy]]->AddEdep(edep);
        (*fDetectorCollection)[previousHitID[currentScinCopy]]->AddInteraction();
        (*fDetectorCollection)[previousHitID[currentScinCopy]]->AddTime(currentTime,edep);
        (*fDetectorCollection)[previousHitID[currentScinCopy]]->AddPosition(aStep->GetPostStepPoint()->GetPosition(),edep);

    } else {

        // new hit
        // interaction types compton, msc (multiple compton scatterings)
        DetectorHit* newHit = new DetectorHit();
        newHit->SetEdep( edep );
        newHit->SetTrackID(aStep->GetTrack()->GetTrackID());
        newHit->SetTrackPDG(aStep->GetTrack()->GetParticleDefinition()->GetPDGEncoding());
        newHit->SetProcessName(aStep->GetPostStepPoint()->GetProcessDefinedStep()->GetProcessName());
        newHit->SetInteractionNumber();
        newHit->SetPosition(aStep->GetPostStepPoint()->GetPosition(),edep);
        newHit->SetTime(currentTime,edep);
        newHit->SetScinID(physVol->GetCopyNo());
        newHit->SetPolarizationIn(aStep->GetPreStepPoint()->GetPolarization());
        newHit->SetMomentumIn(aStep->GetPreStepPoint()->GetMomentum());
        
        newHit->SetPolarizationOut(aStep->GetPostStepPoint()->GetPolarization());
        newHit->SetMomentumOut(aStep->GetPostStepPoint()->GetMomentum());


        // only particles generated by user has PrimaryParticleInformation
        if(aStep->GetTrack()->GetParentID() == 0 ){
            PrimaryParticleInformation* info  = static_cast<PrimaryParticleInformation*> (aStep->GetTrack()->GetDynamicParticle()->GetPrimaryParticle()->GetUserInformation());
    
            if (info != 0 ){
                newHit->SetGenGammaMultiplicity(info->GetGammaMultiplicity());
                newHit->SetGenGammaIndex(info->GetIndex());
                // should be marked as scattering
                info->SetGammaMultiplicity(info->GetGammaMultiplicity()+100);
            }
        }


        G4int id = fDetectorCollection->insert(newHit);
        previousHitID[currentScinCopy] = id-1;
        previousHitTime[currentScinCopy]= currentTime;



    }



    return true;
}


