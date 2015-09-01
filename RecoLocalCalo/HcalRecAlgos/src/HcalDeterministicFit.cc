#include <iostream>
#include <cmath>
#include <climits>
#include "RecoLocalCalo/HcalRecAlgos/interface/HcalDeterministicFit.h"
#include "TMath.h"

using namespace std;

HcalDeterministicFit::HcalDeterministicFit() {}

HcalDeterministicFit::~HcalDeterministicFit() {}

void HcalDeterministicFit::init(HcalTimeSlew::ParaSource tsParam, HcalTimeSlew::BiasSetting bias, HcalDeterministicFit::NegStrategy nStrat, PedestalSub pedSubFxn_, std::vector<double> pars) {
  for(int fi=0; fi<6; fi++){ fpars[fi] = pars.at(fi); }
  fTimeSlew=tsParam;
  fTimeSlewBias=bias;
  fNegStrat=nStrat;
  fPedestalSubFxn_=pedSubFxn_;

}
void HcalDeterministicFit::getLandauFrac(float tStart, float tEnd, float &sum) const{

  if (std::abs(tStart-tEnd-tsWidth)<0.1) {
    sum=0;
    return;
  }
  sum=0;
  return;
}
