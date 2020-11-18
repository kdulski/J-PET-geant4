/**
 *  @copyright Copyright 2020 The J-PET Monte Carlo Authors. All rights reserved.
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may find a copy of the License in the LICENCE file.
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *  @file DetectorSD.cpp
 */

#include "../Info/PrimaryParticleInformation.h"
#include "../Info/EventMessenger.h"
#include "DetectorSD.h"

#include <G4PrimaryParticle.hh>
#include <G4SystemOfUnits.hh>
#include <G4VProcess.hh>
#include <algorithm>

DetectorSD::DetectorSD(G4String name, G4int scinSum, G4double timeMergeValue) :
G4VSensitiveDetector(name), fTimeIntervals(timeMergeValue), fToTScinNum(scinSum), fDetectorCollection()
{
  collectionName.insert("detectorCollection");
  fPreviousHits.resize(fToTScinNum + 1);
}

DetectorSD::~DetectorSD() {}

void DetectorSD::Initialize(G4HCofThisEvent* HCE)
{
  static int HCID = -1;
  fDetectorCollection = new DetectorHitsCollection(SensitiveDetectorName, collectionName[0]);

  if (HCID < 0) {
    HCID = GetCollectionID(0);
  }
  HCE->AddHitsCollection(HCID, fDetectorCollection);

  std::fill(fPreviousHits.begin(), fPreviousHits.end(), HitParameters());
}

// cppcheck-suppress unusedFunction
G4bool DetectorSD::ProcessHits(G4Step* aStep, G4TouchableHistory*)
{
  G4double edep = aStep->GetTotalEnergyDeposit();

   // Judging the fate of primary particles +++++    
  if (aStep->GetTrack()->GetKineticEnergy() > fEvtMessenger->GetEnergyCut() && aStep->GetTrack()->GetParentID() == 0 &&
                fEvtMessenger->GetEnergyCutFlag()
  ) {
    aStep->GetTrack()->SetTrackStatus(fKillTrackAndSecondaries);
    return false;
  }
     
  if (edep == 0.0) {
    double momentumChange = abs(aStep->GetPostStepPoint()->GetMomentum().mag2() - aStep->GetPreStepPoint()->GetMomentum().mag2());
    if (momentumChange > EventMessenger::GetEventMessenger()->GetAllowedMomentumTransfer()) {
      //! particle quanta interact in detector but does not deposit energy
      //! (vide Rayleigh scattering)
      if (aStep->GetTrack()->GetParentID() == 0) {
        PrimaryParticleInformation* info = dynamic_cast<PrimaryParticleInformation*>(
          aStep->GetTrack()->GetDynamicParticle()->GetPrimaryParticle()->GetUserInformation()
        );
        if (info != nullptr) {
          info->SetGammaMultiplicity(PrimaryParticleInformation::kBackground);
        }
      }
    }
    return false;
  }

  G4TouchableHistory* theTouchable = (G4TouchableHistory*) (aStep->GetPreStepPoint()->GetTouchable());
  G4VPhysicalVolume* physVol = theTouchable->GetVolume();
  G4int currentScinCopy = physVol->GetCopyNo();
  G4double currentTime = aStep->GetPreStepPoint()->GetGlobalTime();
  if ((fPreviousHits[currentScinCopy].fID != -1) && (abs(fPreviousHits[currentScinCopy].fTime - currentTime) < fTimeIntervals)) {
    //! update track
    (*fDetectorCollection)[fPreviousHits[currentScinCopy].fID]->AddEdep(edep);
    (*fDetectorCollection)[fPreviousHits[currentScinCopy].fID]->AddInteraction();
    (*fDetectorCollection)[fPreviousHits[currentScinCopy].fID]->AddTime(currentTime, edep);
    (*fDetectorCollection)[fPreviousHits[currentScinCopy].fID]->AddPosition(aStep->GetPostStepPoint()->GetPosition(), edep);
  } else {
    //! new hit - interaction types compton, msc (multiple compton scatterings)
    DetectorHit* newHit = new DetectorHit();
    newHit->SetEdep(edep);
    newHit->SetTrackID(aStep->GetTrack()->GetTrackID());
    newHit->SetTrackPDG(aStep->GetTrack()->GetParticleDefinition()->GetPDGEncoding());
    newHit->SetProcessName(aStep->GetPostStepPoint()->GetProcessDefinedStep()->GetProcessName());
    newHit->SetInteractionNumber();
    newHit->SetPosition(aStep->GetPostStepPoint()->GetPosition(), edep);
    newHit->SetTime(currentTime, edep);
    newHit->SetScinID(physVol->GetCopyNo());
    newHit->SetPolarizationIn(aStep->GetPreStepPoint()->GetPolarization());
    newHit->SetMomentumIn(aStep->GetPreStepPoint()->GetMomentum());
    newHit->SetPolarizationOut(aStep->GetPostStepPoint()->GetPolarization());
    newHit->SetMomentumOut(aStep->GetPostStepPoint()->GetMomentum());

    //! only particles generated by user has PrimaryParticleInformation
    if (aStep->GetTrack()->GetParentID() == 0) {
      PrimaryParticleInformation* info = static_cast<PrimaryParticleInformation*>(
        aStep->GetTrack()->GetDynamicParticle()->GetPrimaryParticle()->GetUserInformation()
      );
      if (info != 0) {
        newHit->SetGenGammaMultiplicity(info->GetGammaMultiplicity());
        newHit->SetGenGammaIndex(info->GetIndex());
        //! should be marked as scattering
        info->SetGammaMultiplicity(info->GetGammaMultiplicity() + PrimaryParticleInformation::kScatteringInActivePartAddition);
        if (fHistoManager) {
          fHistoManager->SetParentIDofPhoton(info->GetGammaMultiplicity() - PrimaryParticleInformation::kScatteringInActivePartAddition);
          fHistoManager->AddNodeToDecayTree(info->GetGammaMultiplicity(), 
                                        aStep->GetTrack()->GetTrackID());
          fHistoManager->SetParentIDofPhoton(info->GetGammaMultiplicity());
        }
      }
    }
    else
    {
    // This is multiple scattering and compton that does not come from primary gamma generated (pair creation, electron scattering, ...)
      if (fHistoManager) {
        fHistoManager->AddNodeToDecayTree(fHistoManager->GetParentIDofPhoton() * PrimaryParticleInformation::kSecondaryParticleMultiplication, 
                                          aStep->GetTrack()->GetTrackID());
        fHistoManager->SetParentIDofPhoton(fHistoManager->GetParentIDofPhoton() * PrimaryParticleInformation::kSecondaryParticleMultiplication);
      }
      newHit->SetGenGammaMultiplicity(fHistoManager->GetParentIDofPhoton() * PrimaryParticleInformation::kSecondaryParticleMultiplication);
    }
    G4int id = fDetectorCollection->insert(newHit);
    fPreviousHits[currentScinCopy].fID = id - 1;
    fPreviousHits[currentScinCopy].fTime = currentTime;
  }
  return true;
}
