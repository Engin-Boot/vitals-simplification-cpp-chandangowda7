#include <assert.h>
bool bpmcheck( float bpm){
  return(!(bpm < 70 || bpm > 150));
    }
bool spo2check(float spo2){
  return(!(spo2 < 90));
}
bool respRatecheck(float respRate){
  return(!(respRate < 30 || respRate > 95));
}
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  
    return(bpmcheck(bpm));
  
    return(spo2check(spo2));
   
    return (respRatecheck(respRate));
  
  return true;
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
