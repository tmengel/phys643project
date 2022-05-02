#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"

#include "TMVA/Tools.h"
#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/TMVAGui.h"

using namespace TMVA;

int TmvaTrainer(){
   TMVA::Tools::Instance();
   std::map<std::string,int> Use;

      // Cut optimisation
   Use["Cuts"]            = 1;
   Use["CutsD"]           = 1;
      //
      // Neural Networks (all are feed-forward Multilayer Perceptrons)
   Use["MLP1"]             = 1; // Recommended ANN
   Use["MLP2"]             = 1; // Recommended ANN
   Use["MLP3"]             = 1; // Recommended ANN
   Use["TMlpANN"]         = 0; // ROOT's own ANN

   #ifdef R__HAS_TMVAGPU
      Use["DNN_GPU"]         = 1; // CUDA-accelerated DNN training.
   #else
      Use["DNN_GPU"]         = 0;
   #endif

   #ifdef R__HAS_TMVACPU
      Use["DNN_CPU"]         = 1; // Multi-core accelerated DNN.
   #else
      Use["DNN_CPU"]         = 0;
   #endif

   // Support Vector Machine
   Use["SVM"]             = 0;
   // Boosted Decision Trees
   Use["BDT"]             = 0; // uses Adaptive Boost
   // Friedman's RuleFit method, ie, an optimised series of cuts ("rules")
   Use["RuleFit"]         = 0;
   // ---------------------------------------------------------------

   std::cout << std::endl;
   std::cout << "==> Starting B/D0 Classification" << std::endl;


   TString outfileName("tvma_training_output.root");
   TFile *outputFile = TFile::Open(outfileName, "RECREATE" );

   Float_t backgroundweight = 1.0;
   Float_t signalweight = 1.0;

   TMVA::Factory *factory = new TMVA::Factory( "", outputFile,"!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" );

   TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");

   dataloader->AddVariable( "d0Pt", 'F' );
   dataloader->AddVariable( "d0E", 'F' );
   dataloader->AddVariable( "pionPt", 'F' );
   dataloader->AddVariable( "pionE", 'F' );
   dataloader->AddVariable( "kaonPt", 'F' );
   dataloader->AddVariable( "kaonE", 'F' );
   dataloader->AddVariable( "DecayLength", 'F' );
   dataloader->AddVariable( "cosTheta",  'F' );
   dataloader->AddVariable( "DCA_D0", 'F' );
   dataloader->AddVariable( "DCA_Pion",  'F' );
   dataloader->AddVariable( "DCA_Kaon",  'F' );
   dataloader->AddVariable( "DCA_piK",  'F' );

   dataloader->AddSpectator( "kaonPhi", 'F' );
   dataloader->AddSpectator( "kaonEta", 'F' );
   dataloader->AddSpectator( "pionPhi", 'F' );
   dataloader->AddSpectator( "pionEta", 'F' );
   dataloader->AddSpectator( "d0Phi", 'F' );
   dataloader->AddSpectator( "d0Eta", 'F' );

   TFile *inputFile0 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin0.root");
   TFile *inputFile1 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin1.root");
   TFile *inputFile2 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin2.root");
   TFile *inputFile3 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin3.root");
   TFile *inputFile4 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin4.root");
   TFile *inputFile5 = TFile::Open("pythiadat/200GeV_pp_d0b0_pythiabin5.root");

   TTree *signal0  = (TTree*)inputFile0->Get("promptd0");
   TTree *signal1  = (TTree*)inputFile1->Get("promptd0");
   TTree *signal2  = (TTree*)inputFile2->Get("promptd0");
   TTree *signal3  = (TTree*)inputFile3->Get("promptd0");
   TTree *signal4  = (TTree*)inputFile4->Get("promptd0");
   TTree *signal5  = (TTree*)inputFile5->Get("promptd0");

   TTree *background0    = (TTree*)inputFile0->Get("nonpromptd0");
   TTree *background1    = (TTree*)inputFile1->Get("nonpromptd0");
   TTree *background2    = (TTree*)inputFile2->Get("nonpromptd0");
   TTree *background3    = (TTree*)inputFile3->Get("nonpromptd0");
   TTree *background4    = (TTree*)inputFile4->Get("nonpromptd0");
   TTree *background5    = (TTree*)inputFile5->Get("nonpromptd0");

   dataloader->AddSignalTree    ( signal0, signalweight);
   dataloader->AddSignalTree    ( signal1, signalweight);
   dataloader->AddSignalTree    ( signal2, signalweight);
   dataloader->AddSignalTree    ( signal3, signalweight);
   dataloader->AddSignalTree    ( signal4, signalweight);
   dataloader->AddSignalTree    ( signal5, signalweight);
   dataloader->AddBackgroundTree( background0, backgroundweight  );
   dataloader->AddBackgroundTree( background1, backgroundweight  );
   dataloader->AddBackgroundTree( background2, backgroundweight  );
   dataloader->AddBackgroundTree( background3, backgroundweight  );
   dataloader->AddBackgroundTree( background4, backgroundweight  );
   dataloader->AddBackgroundTree( background5, backgroundweight  );

   dataloader->SetSignalWeightExpression( "pythiaweights" );
   dataloader->SetBackgroundWeightExpression( "pythiaweights" );

   TCut etaCut = "TMath::Abs(kaonEta) <1.1 && TMath::Abs(pionEta) <1.1 && TMath::Abs(d0Eta) <1.1";
   TCut mycut = "!TMath::IsNaN(d0Pt) && !TMath::IsNaN(pionPt) && !TMath::IsNaN(kaonPt) && !TMath::IsNaN(DecayLength)
                   && !TMath::IsNaN(cosTheta) && !TMath::IsNaN(DCA_D0) && !TMath::IsNaN(DCA_Pion) && !TMath::IsNaN(DCA_Kaon) && !TMath::IsNaN(DCA_piK) ";

   dataloader->PrepareTrainingAndTestTree( mycut, etaCut, "SplitMode=Random:NormMode=NumEvents:!V" );


   if (Use["Cuts"])  factory->BookMethod( dataloader, TMVA::Types::kCuts, "Cuts","!H:!V:FitMethod=MC:EffSel:SampleSize=200000:VarProp=FSmart" );
   if (Use["CutsD"]) factory->BookMethod( dataloader, TMVA::Types::kCuts, "CutsD", "!H:!V:FitMethod=MC:EffSel:SampleSize=200000:VarProp=FSmart:VarTransform=Decorrelate" );
      // TMVA ANN: MLP (recommended ANN) -- all ANNs in TMVA are Multilayer Perceptrons
   if (Use["MLP1"])  factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP1", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=600:HiddenLayers=N+5:TestRate=5:!UseRegulator" );
   if (Use["MLP2"])  factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP2", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=600:HiddenLayers=N-1,N+5:TestRate=5:!UseRegulator" );
   if (Use["MLP3"])  factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP3", "H:!V:NeuronType=sigmoid:VarTransform=N:NCycles=600:HiddenLayers=N-1,N+10:TestRate=5:!UseRegulator" );
   // Multi-architecture DNN implementation.
   if (Use["DNN_CPU"] or Use["DNN_GPU"]) {
      // General layout.
      TString layoutString ("Layout=TANH|64,TANH|128,TANH|128,SIGMOID|128,LINEAR");

      // Define Training strategy. One could define multiple stratgey string separated by the "|" delimiter 

      TString trainingStrategyString = ("TrainingStrategy=LearningRate=1e-2,Momentum=0.9,"
                                          "ConvergenceSteps=20,BatchSize=100,TestRepetitions=1,"
                                          "WeightDecay=1e-4,Regularization=None,"
                                          "DropConfig=0.5+0.5+0.5+0.5");

         // General Options.
      TString dnnOptions ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=N:"
                           "WeightInitialization=XAVIERUNIFORM");
      dnnOptions.Append (":"); dnnOptions.Append (layoutString);
      dnnOptions.Append (":"); dnnOptions.Append (trainingStrategyString);

         // Cuda implementation.
      if (Use["DNN_GPU"]) {
            TString gpuOptions = dnnOptions + ":Architecture=GPU";
            factory->BookMethod(dataloader, TMVA::Types::kDL, "DNN_GPU", gpuOptions);
      }
         // Multi-core CPU implementation.
      if (Use["DNN_CPU"]) {
            TString cpuOptions = dnnOptions + ":Architecture=CPU";
            factory->BookMethod(dataloader, TMVA::Types::kDL, "DNN_CPU", cpuOptions);
      }
   }
   // Tmlp(Root)ANN
   if (Use["TMlpANN"]) factory->BookMethod( dataloader, TMVA::Types::kTMlpANN, "TMlpANN", "!H:!V:NCycles=200:HiddenLayers=N+1,N:LearningMethod=BFGS:ValidationFraction=0.3"  ); // n_cycles:#nodes:#nodes:...
   // Support Vector Machine
   if (Use["SVM"]) factory->BookMethod( dataloader, TMVA::Types::kSVM, "SVM", "Gamma=0.25:Tol=0.001:VarTransform=Norm" );
   // Boosted Decision Trees
   if (Use["BDT"]) factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT", "!H:!V:NTrees=850:MinNodeSize=2.5%:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
   // RuleFit -- TMVA implementation of Friedman's method
   if (Use["RuleFit"]) factory->BookMethod( dataloader, TMVA::Types::kRuleFit, "RuleFit", "H:!V:RuleFitModule=RFTMVA:Model=ModRuleLinear:MinImp=0.001:RuleMinDist=0.001:NTrees=20:fEventsMin=0.01:fEventsMax=0.5:GDTau=-1.0:GDTauPrec=0.01:GDStep=0.01:GDNSteps=10000:GDErrScale=1.02" );

      
   factory->TrainAllMethods();
   // Evaluate all MVAs using the set of test events
   factory->TestAllMethods();
   // Evaluate and compare performance of all configured MVAs
   factory->EvaluateAllMethods();

// --------------------------------------------------------------

   // Save the output
   outputFile->Close();

   std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
   std::cout << "==> TMVAClassification is done!" << std::endl;

   delete factory;
   delete dataloader;
   // Launch the GUI for the root macros
   if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );

   return 0;

}

int main( int argc, char** argv )
{
   return TmvaTrainer();
}
