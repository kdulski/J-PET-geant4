#include <sys/stat.h>
#include <functional>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <sstream>
#include <numeric>
#include <iomanip>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <map>

#include "TSystemDirectory.h"
#include "TClonesArray.h"
#include "TSystemFile.h"
#include "TRandom3.h"
#include "TVector3.h"
#include "TDatime.h"
#include "TNtuple.h"
#include "TObject.h"
#include "TBranch.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TStyle.h"
#include "TBits.h"
#include "TFile.h"
#include "TMath.h"
#include "TTree.h"

#include "../Objects/Framework/JPetGeantEventInformation.h"
#include "JPetGeantEventPack.h"
#include "../Objects/Framework/JPetGeantScinHits.h"

void AnalyzeFile(std::string NameOfFile);

int main(int argc, char* argv[])
{
  if (argc < 2) {
    std::cout << "Not enough arguments. More than two needed: name of the file | name of the second file ..." << std::endl;
    return 0;
  }

  TString outputName = "";
  std::string fileOrPattern = argv[1];
  std::vector<std::string> filesToAnalyze;
  filesToAnalyze.push_back(fileOrPattern);
  if (argc > 2) {
    outputName = "Out_LastFile_" + fileOrPattern;
    for (unsigned i=2; i<argc; i++) {
      fileOrPattern = argv[i];
      filesToAnalyze.push_back(fileOrPattern);
    }
  }

  for (unsigned fileNo=0; fileNo<filesToAnalyze.size(); fileNo++) {
    AnalyzeFile(filesToAnalyze.at(fileNo));
  }

  return 0;
}

void AnalyzeFile(std::string NameOfFile)
{
  TString fileName = NameOfFile;
  std::cout << " Reading file " << fileName << std::endl;
  TFile* hfile = new TFile(fileName, "READ");
  TTree *tree = (TTree*) hfile->Get("T");
  JPetGeantEventPack *evPack = nullptr;

  TObjArray* arr = tree->GetListOfBranches();
  TBranch* branch = (TBranch*)(arr->At(0));
  TObject* fEntry;
  branch->SetAddress(&fEntry);
  //tree->SetBranchAddress("eventPack", &evPack);
  Int_t nentries = (Int_t)tree->GetEntries();

  int test;

  for (Int_t i=0; i<nentries; i++) {
    tree->GetEntry(i);

    evPack = dynamic_cast<JPetGeantEventPack* const>(fEntry);
    if (evPack) {
      std::cout << evPack->GetNumberOfHits() << std::endl;
      std::cin >> test;
    }
  }

  hfile->Close();
}
