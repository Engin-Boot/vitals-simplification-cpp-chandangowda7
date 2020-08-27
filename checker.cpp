#include <assert.h>

bool IsInsideLimit(float value,int upperLimit,int lowerLimit)
{
  return(value>=lowerLimit && value<=upperLimit)
}
  
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
    return(IsInsideLimit(bpm,70,150));
  
    return(IsInsideLimit(spo2,90,100);
   
    return (IsInsideLimit(respRate,30,95);
  
  return true;
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
