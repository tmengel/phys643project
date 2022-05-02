#include "Pythia8/Pythia.h"
#include "TRandom3.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TMath.h"

#include <cstdlib>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace Pythia8;
using namespace std;

#define DCA_XY_RES  2.0 // mm
#define DCA_Z_RES  2.0 // mm
#define PT_RES 0.15 // GeV/c
#define READOUTRATE 0.025 // ms
#define MAGFIELD = 1.5 // T

    //Int_t bquark =5;
    //Int_t cquark = 4;
  
    // Int_t bCodes[28] = {511, 521, 531, 541, 5122, 5132, 5142, 5232, 5242,
    // 5332, 5342, 5412, 5414, 5422, 5424, 5432, 5434, 5442, 5444, 5512,
    // 5514, 5522, 5524, 5532, 5534, 5542, 5544, 5544 };

    // Int_t dCodes[38] = {421, 411, 10411, 10421, 413, 423, 10413, 10423, 20413,
    // 20423, 415, 425, 431, 10431, 433, 10433, 20433, 435, 4122,
    // 4222, 4212, 4224, 4214, 4232, 4132, 4322, 4312, 4324, 4314,
    // 4332, 4334, 4412, 4422, 4414, 4424, 4432, 4434, 4444};

Int_t motherKF, d0KF, NumDaughters, daughterKF, pionKF, kaonKF;
Float_t DecayLength, cosTheta,eventweight, scalingconst;
Float_t DCA_D0, DCA_Pion, DCA_Kaon, DCA_piK, DCAxy_pion, DCAz_pion, DCAxy_kaon, DCAz_kaon;
Float_t d0E, d0Pt, d0Phi, d0Eta,d0px, d0py, d0pz, d0p;
Float_t pionE, pionPhi, pionEta, pionPt;
Float_t kaonE, kaonPhi, kaonEta, kaonPt;
Float_t motherE, motherPt, motherPhi, motherEta;
Float_t daughterE, daughterPt, daughterPhi, daughterEta;
Float_t pionVx, pionVy, pionVz;
Float_t kaonVx, kaonVy, kaonVz;
Float_t d0DecayVx, d0DecayVy, d0DecayVz, d0ProdVx, d0ProdVy, d0ProdVz;
Float_t trueDLx, trueDLy, trueDLz, trueDLMag, ProdVtxMag, sinTheta, TempTheta; 
Float_t KaonVtx, PionVtx; 
Float_t daughterPz,daughterPx,daughterPy, daughterVx, daughterVy, daughterVz, daughterVt, daughterMagVtx, daughterDCAz,daughterDCAxy, daughterDCA, trackRadius;

void clearBuffer(){
    TempTheta = 0;
    DecayLength	= 0;
    cosTheta	= 0;
    DCA_D0	= 0;
    DCA_Pion	= 0;
    DCA_Kaon	= 0;
    DCA_piK	= 0;
    DCAxy_pion	= 0;
    DCAz_pion	= 0;
    DCAxy_kaon	= 0;
    DCAz_kaon	= 0;
    motherKF	= 0;
    motherE	= 0;
    motherPt	= 0;
    motherPhi	= 0;
    motherEta	= 0;
    d0KF	= 0;
    d0E	= 0;
    d0Pt	= 0;
    d0Phi	= 0;
    d0Eta	= 0;
    d0p = 0;
    d0DecayVx	= 0;
    d0DecayVy	= 0;
    d0DecayVz	= 0;
    d0ProdVx	= 0;
    d0ProdVy	= 0;
    d0ProdVz	= 0;
    trueDLx	= 0;
    trueDLy	= 0;
    trueDLz	= 0;
    trueDLMag	= 0;
    ProdVtxMag	= 0;
    sinTheta	= 0;
    KaonVtx	= 0;
    PionVtx	= 0;
    NumDaughters	= 0;
    daughterKF	= 0;
    daughterE	= 0;
    daughterPhi	= 0;
    daughterEta	= 0;
    daughterPz	= 0;
    daughterPt	= 0;
    daughterVx	= 0;
    daughterVy	= 0;
    daughterVz	= 0;
    daughterVt	= 0;
    daughterMagVtx	= 0;
    daughterDCAz	= 0;
    trackRadius	= 0;
    daughterDCAxy	= 0;
    pionE   = 0;
    pionPhi   = 0;
    pionEta   = 0;
    pionPt   = 0;
    pionKF  = 0;
    kaonE   = 0;
    kaonPhi   = 0;
    kaonEta   = 0;
    kaonPt   = 0;
    kaonKF  = 0;
    pionVx = 0;
    pionVy = 0;
    pionVz = 0;
    kaonVx = 0;
    kaonVy = 0;
    kaonVz = 0;
    daughterDCA = 0;
}

void GenPythiaData(int nEvent = 10000,Float_t pthardmin = 5.0, Float_t pthardmax = 25.0, Int_t ptbin = 1){

    TRandom3 *fRandom = new TRandom3(42);
 
    vector<int> iAllHad;
    vector<int> iAllDaughters;
    int nAllHad = 0;

 
   TString fileName = Form("pythiadat/200GeV_pp_d0b0_pythiabin%i.root",ptbin);

    TFile *datafile = TFile::Open(fileName.Data(), "RECREATE");
    TTree *nonPromptD0 = new TTree("nonpromptd0", "nonpromptd0");
    TTree *promptD0 = new TTree("promptd0","promptd0");



    nonPromptD0->Branch("pythiaweights", &eventweight, "pythiaweights/F");
    nonPromptD0->Branch("d0Pt", &d0Pt, "d0Pt/F");
    nonPromptD0->Branch("d0Phi", &d0Phi, "d0Phi/F");
    nonPromptD0->Branch("d0Eta", &d0Eta, "d0Eta/F");
    nonPromptD0->Branch("d0E", &d0E, "d0E/F");

    nonPromptD0->Branch("pionPt", &pionPt, "pionPt/F");
    nonPromptD0->Branch("pionPhi", &pionPhi, "pionPhi/F");
    nonPromptD0->Branch("pionEta", &pionEta, "pionEta/F");
    nonPromptD0->Branch("pionE", &pionE, "pionE/F");

    nonPromptD0->Branch("kaonPt", &kaonPt, "kaonPt/F");
    nonPromptD0->Branch("kaonPhi", &kaonPhi, "kaonPhi/F");
    nonPromptD0->Branch("kaonEta", &kaonEta, "kaonEta/F");
    nonPromptD0->Branch("kaonE", &kaonE, "kaonE/F");
    
    nonPromptD0->Branch("DecayLength", &DecayLength, "DecayLength/F");
    nonPromptD0->Branch("cosTheta", &cosTheta, "cosTheta/F");
    nonPromptD0->Branch("DCA_D0", &DCA_D0, "DCA_D0/F");
    nonPromptD0->Branch("DCA_Pion", &DCA_Pion, "DCA_Pion/F");
    nonPromptD0->Branch("DCA_Kaon", &DCA_Kaon, "DCA_Kaon/F");
    nonPromptD0->Branch("DCA_piK", &DCA_piK, "DCA_piK/F");
    
 

    promptD0->Branch("pythiaweights", &eventweight, "pythiaweights/F");
    promptD0->Branch("d0Pt", &d0Pt, "d0Pt/F");
    promptD0->Branch("d0Phi", &d0Phi, "d0Phi/F");
    promptD0->Branch("d0Eta", &d0Eta, "d0Eta/F");
    promptD0->Branch("d0E", &d0E, "d0E/F");

    promptD0->Branch("pionPt", &pionPt, "pionPt/F");
    promptD0->Branch("pionPhi", &pionPhi, "pionPhi/F");
    promptD0->Branch("pionEta", &pionEta, "pionEta/F");
    promptD0->Branch("pionE", &pionE, "pionE/F");

    promptD0->Branch("kaonPt", &kaonPt, "kaonPt/F");
    promptD0->Branch("kaonPhi", &kaonPhi, "kaonPhi/F");
    promptD0->Branch("kaonEta", &kaonEta, "kaonEta/F");
    promptD0->Branch("kaonE", &kaonE, "kaonE/F");

    promptD0->Branch("DecayLength", &DecayLength, "DecayLength/F");
    promptD0->Branch("cosTheta", &cosTheta, "cosTheta/F");
    promptD0->Branch("DCA_D0", &DCA_D0, "DCA_D0/F");
    promptD0->Branch("DCA_Pion", &DCA_Pion, "DCA_Pion/F");
    promptD0->Branch("DCA_Kaon", &DCA_Kaon, "DCA_Kaon/F");
    promptD0->Branch("DCA_piK", &DCA_piK, "DCA_piK/F");


    Pythia pythia;
    Pythia8::Settings& settings = pythia.settings;
    const Pythia8::Info& info = pythia.info;
    Event& event = pythia.event;
    
   
    pythia.readFile("pythiaSettings.cmnd");
    settings.parm("Main:numberOfEvents",nEvent);
    settings.parm("PhaseSpace:pTHatMin", pthardmin);
    settings.parm("PhaseSpace:pTHatMax", pthardmax);

    pythia.init();
    
    for (int iEvent = 0; iEvent < nEvent; ++iEvent) {
       
        if (!pythia.next()) continue;
        eventweight = info.weight();
        iAllHad.clear();
        iAllHad.resize(0);
        for (int i = 0; i < event.size(); ++i) {
            int idAbs = event[i].idAbs();
            int motherstat = event[i].statusAbs();
            if (idAbs == 421 && (motherstat > 80 && motherstat < 90)) { iAllHad.push_back(i); }
            if (idAbs == 511 && (motherstat > 80 && motherstat < 90)) { iAllHad.push_back(i); }
        }
         
        nAllHad = iAllHad.size();
        for(int iBD = 0; iBD< nAllHad; iBD++){
            int Btrigger=0;
            int Dtrigger=0;
            int D0Idx = 0;
            if( event[ iAllHad[iBD] ].idAbs() == 421){
                D0Idx = iAllHad[iBD];
                Dtrigger=1;
            }
            else if( event[ iAllHad[iBD] ].idAbs() == 511 || event[ iAllHad[iBD] ].idAbs() == 521 ){
                Btrigger=1;
                iAllDaughters.clear();
                iAllDaughters.resize(0);
                iAllDaughters = event[ iAllHad[iBD] ].daughterList();
                for(int ndaughters =0; ndaughters< iAllDaughters.size(); ndaughters++ ){
                    if(event[iAllDaughters[ndaughters]].idAbs() == 421){
                        D0Idx = iAllDaughters[ndaughters];
                        break;
                    } 
                }

            } 
            
            iAllDaughters.clear();
            iAllDaughters.resize(0);
            iAllDaughters = event[ D0Idx ].daughterList();

            d0KF = event[ D0Idx ].id();
            d0E = event[ D0Idx ].e();
            d0px = event[ D0Idx ].px();
            d0py = event[ D0Idx ].py();
            d0pz = event[ D0Idx ].pz();
            d0Pt = event[ D0Idx ].pT();
            d0Phi = event[ D0Idx ].phi();
            d0Eta = event[ D0Idx ].eta();

            d0DecayVx= event[ D0Idx ].xDec();
            d0DecayVy= event[ D0Idx ].yDec();
            d0DecayVz = event[ D0Idx ].zDec();

            d0Pt    += d0Pt*(fRandom->Gaus(0,PT_RES));
            d0px    += d0px*(fRandom->Gaus(0,PT_RES));
            d0py    += d0py*(fRandom->Gaus(0,PT_RES));
            d0pz    += d0pz*(fRandom->Gaus(0,PT_RES));
            d0p = TMath::Sqrt((d0px*d0px) + (d0py*d0py)+ (d0pz*d0pz));

            d0DecayVx += d0DecayVx*(fRandom->Gaus(0,DCA_XY_RES));
            d0DecayVy += d0DecayVy*(fRandom->Gaus(0,DCA_XY_RES));
            d0DecayVz += d0DecayVz*(fRandom->Gaus(0,DCA_Z_RES));
            
            DecayLength = TMath::Sqrt( (d0DecayVx*d0DecayVx) + (d0DecayVz*d0DecayVz)+ (d0DecayVy*d0DecayVy) );
            cosTheta = TMath::Abs(((d0px*d0DecayVx) + (d0py*d0DecayVy)  + (d0pz*d0DecayVz))/(DecayLength*d0p)) ;
            DCA_D0 = TMath::Abs(DecayLength*TMath::Sqrt(1-cosTheta*cosTheta));
           // NumDaughters = iAllDaughters.size();

            for(int k=0; k< 2; k++){

                daughterKF = event[iAllDaughters[k]].id();
                daughterPt = event[iAllDaughters[k]].pT();
                daughterPhi = event[iAllDaughters[k]].phi();
                daughterEta = event[iAllDaughters[k]].eta();
                daughterE = event[iAllDaughters[k]].e();
                daughterPy = event[iAllDaughters[k]].py();
                daughterPx = event[iAllDaughters[k]].px();
                daughterPz = event[iAllDaughters[k]].pz();
                daughterVx = event[iAllDaughters[k]].xProd();
                daughterVy = event[iAllDaughters[k]].yProd();
                daughterVz = event[iAllDaughters[k]].zProd();
                daughterVt = event[iAllDaughters[k]].tProd();

                daughterPt += daughterPt*(fRandom->Gaus(0,PT_RES));
                daughterPx += daughterPx*(fRandom->Gaus(0,PT_RES));
                daughterPy += daughterPy*(fRandom->Gaus(0,PT_RES));
                daughterPz += daughterPz*(fRandom->Gaus(0,PT_RES));
                daughterVx += daughterVx*(fRandom->Gaus(0,DCA_XY_RES));
                daughterVy += daughterVy*(fRandom->Gaus(0,DCA_XY_RES));
                daughterVz += daughterVz*(fRandom->Gaus(0,DCA_Z_RES));
                daughterVt += daughterVt*READOUTRATE*(fRandom->Uniform());
                

                daughterDCAz = TMath::Abs(TMath::Abs(daughterVz) - TMath::Abs(daughterPz*daughterVt));
                daughterMagVtx = TMath::Sqrt((daughterVx*daughterVx)+(daughterVy*daughterVy));
                TempTheta = TMath::ATan(TMath::Abs(daughterVx/daughterVy))+(TMath::Pi()*0.75);
                trackRadius = daughterPt/(1.5E-9);
                daughterDCAxy  =  TMath::Sqrt(daughterMagVtx*daughterMagVtx + trackRadius*trackRadius - 2*trackRadius*daughterMagVtx*TMath::Cos(TempTheta)) - trackRadius;
                daughterDCA = TMath::Sqrt(daughterDCAz*daughterDCAz+daughterDCAxy*daughterDCAxy);

                if(TMath::Abs(daughterKF) == 211){
                    
                    DCAxy_pion = TMath::Abs(daughterDCAxy);
                    DCAz_pion = TMath::Abs(daughterDCAz);
                    DCA_Pion  = daughterDCA;
                    pionKF = daughterKF;
                    pionPt = daughterPt;
                    pionPhi = daughterPhi;
                    pionEta = daughterEta;
                    pionE = daughterE;
                    pionVx = daughterVx;
                    pionVy = daughterVy;
                    pionVz = daughterVz;
                } 
                if(TMath::Abs(daughterKF) == 321){
                    
                    DCAxy_kaon = TMath::Abs(daughterDCAxy);
                    DCAz_kaon = TMath::Abs(daughterDCAz);
                    DCA_Kaon  = daughterDCA; 
                    kaonKF = daughterKF;
                    kaonPt = daughterPt;
                    kaonPhi = daughterPhi;
                    kaonEta = daughterEta;
                    kaonE = daughterE;
                    kaonVx = daughterVx;
                    kaonVy = daughterVy;
                    kaonVz = daughterVz;
                } 
            }


            DCA_piK = TMath::Sqrt( (pionVx - kaonVx)*(pionVx - kaonVx) + (pionVy - kaonVy)*(pionVy - kaonVy) + (pionVz - kaonVz)*(pionVz - kaonVz));
           
                  
            if(Btrigger == 1) nonPromptD0->Fill();
            else if(Dtrigger == 1) promptD0->Fill();
        

            clearBuffer();               

        
        }



    
    }
   
    pythia.stat();
    datafile->Write();
    datafile->Close();

    
}

int main( int argc, char** argv )
{
    int nEvent = 1000000;
    if(argc >=2) nEvent = atoi(argv[1]); 
    Int_t numBatches = 7;
    Float_t pthatbatches[numBatches] = {5.,15.,25.,35.,45.,55.,-1.};

    
    for(int i =0; i< (numBatches-1); i++){
       GenPythiaData(nEvent,pthatbatches[i],pthatbatches[i+1],i);
    }
    
    return 0; 
}