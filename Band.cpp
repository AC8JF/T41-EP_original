#ifndef BEENHERE
#include "SDT.h"
#endif


/*****
  Purpose: set Band
  Parameter list:
    void
  Return value;
    void
*****/
void SetBand()
{
  old_demod_mode = -99; // used in setup_mode and when changing bands, so that LoCut and HiCut are not changed!
  SetupMode(bands[currentBand].mode);
  SetFreq();
  ShowFrequency();
  FilterBandwidth();
}
