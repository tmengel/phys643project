// main08.cc is a part of the PYTHIA event generator.
// Copyright (C) 2022 Torbjorn Sjostrand.
// PYTHIA is licenced under the GNU GPL v2 or later, see COPYING for details.
// Please respect the MCnet Guidelines, see GUIDELINES for details.

// Keywords: basic usage; biasing; pT bias;

// This is a simple test program.
// It illustrates methods to emphasize generation at high pT.

#include "Pythia8/Pythia.h"

using namespace Pythia8;

int main() {

  // Different modes are illustrated for setting the pT ranges.
  // 1 : Hardcoded in the main program.
  // 2 : Using the Main:subrun keyword in a separate command file.
  // A third method instead biases selection continuously.
  // 3 : Bias high-pT selection by a pT^4 factor.
  // Matching also to low-pT processes is more complicated.
  // 4 : Matching between low- and high-pT. (No diffraction.)
  // 5: As 4, but bias high-pT selection by a pT^4 factor.
 
  // Number of events to generate per bin.
  int nEvent = 1000;


  // One does not need complete events to study pThard spectrum only.
  

  // Book histograms.
  int nRange = 100;
  double pTrange =  200;
  double testsum = 0;

  Hist pTtrackRaw("pT tracks distribution, unweighted", nRange, 0., pTrange);
  Hist pTtrackNorm("pT tracks distribution, weighted", nRange, 0., pTrange);
  Hist pTtrackFinal("pT tracks distribution, weighted", nRange, 0., pTrange);
  // Generator.
  Pythia pythia;

  // Shorthand for some public members of pythia (also static ones).
  Settings& settings = pythia.settings;
  const Info& info = pythia.info;
  Event& event = pythia.event;

  // Optionally limit output to minimal one.
 
  int nBin = 20;


  // Mode 1: set up five pT bins - last one open-ended.


  // Modes 4 & 5: set up pT bins for range [0, 100]. The lowest bin
  // is generated with soft processes, to regularize pT -> 0 blowup.
  // Warning: if pTlimitLow[1] is picked too low there will be a
  // visible discontinuity, since soft processes are generated with
  // dampening and "Sudakov" for pT -> 0, while hard processes are not.
  double pTlimitLow[21] = {5.,7.,8.,10.,11.,12.,15.,16.,17.0,20.,21.,23.,25.,27.,30.,35.,40.,45.,50.,55.,-1.};


  // Loop over number of bins, i.e. number of subruns.
  for (int iBin = 0; iBin < nBin; ++iBin) {
    
    testsum=0;
    // Normally HardQCD, but in two cases nonDiffractive.
  
    // Mode 2: subruns stored in the main08.cmnd file.
    pythia.readFile("main08.cmnd", iBin);
    settings.parm("Main:numberOfEvents",nEvent);
    settings.parm("PhaseSpace:pTHatMin", pTlimitLow[iBin]);
    settings.parm("PhaseSpace:pTHatMax", pTlimitLow[iBin + 1]);
    pythia.init();
    
    
    // Mode 4: hardcoded here. Use settings.parm for non-string input.

    // Mode 5: hardcoded here. Use settings.parm for non-string input.
    // Hard processes in one step, but pT-weighted.
      // Initialize for LHC at 14 TeV.

    // Reset local histograms (that need to be rescaled before added).
    pTtrackNorm.null();

    // Begin event loop.
    for (int iEvent = 0; iEvent < nEvent; ++iEvent) {
      
      double weight = info.weight();
      testsum+=weight;
      // Generate events. Skip if failure.
      if (!pythia.next()) continue;
      for (int i = 0; i < event.size(); ++i){
             if (event[i].isFinal() && event[i].isCharged()) {
                if(abs(event[i].eta())<=1.1){
                    double ptTrack = event[i].pT();
                    pTtrackRaw.fill( ptTrack );
                   pTtrackNorm.fill( ptTrack, weight);
                }
        }
      }

      // Soft events have no upper pT limit. They therefore overlap
      // with hard events, and the overlap must be removed by hand.
      // No overlap for elastic/diffraction, which is only part of soft
    // End of event loop. Statistics.
    }
     pythia.stat();

    // Normalize to cross section for each case, and add to sum.
    double sigmaNorm = (info.sigmaGen() / info.weightSum())
                     * (nRange / pTrange);
    //pTtrackFinal += sigmaNorm*pTtrackNorm;
    //cout << info.sigmaGen() << "===================" << info.weightSum()<<endl;;
  // End of pT-bin loop.
  cout << testsum << '\t' << info.weightSum() << '\t' << sigmaNorm << endl;
  }

  // Output histograms.
  // cout << pTraw << pTnorm << pTpow3 << pTpow5;


  // cout << pTtrackFinal << pTtrackRaw;

  //cout << testsum << '\t' << info.weightSum() <<endl;

  // Done.
  return 0;
}
