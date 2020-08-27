#include <assert.h>

bool IsInsideLimit(float value,int lowerLimit,int upperLimit)
{
  return(value>=lowerLimit && value<=upperLimit);
}
  
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
    return(IsInsideLimit(bpm,70,150) && IsInsideLimit(spo2,90,100) && IsInsideLimit(respRate,30,95));
  
    
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
