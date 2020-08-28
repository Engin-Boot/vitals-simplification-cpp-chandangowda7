#include <assert.h>
#include<iostream>
class Alert
{
};
class AlertWithMsg:public Alert
{
  public:
  void raiseAlert(const char* vitalName,const char* level)
  {
    std::cout<<"SMS:"<<vitalName<<""<<level;
  }
};
class AlertWithSound:public Alert
{
  public:
  void raiseAlert(const char* vitalName,const char* level)
  {
    std::cout<<"SMS:"<<vitalName<<""<<level;
  }
};

bool IsInsideLimit(float value,int lowerLimit,int upperLimit,const char* vitalName)
{
  if(value>=lowerLimit && value<=upperLimit)
  {
     AlertWithMsg obj;
        obj.raiseAlert(vitalName,"out of range");
    return true;
  }
  return false;
}
  
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool isbpmnormal=IsInsideLimit(bpm,70,150,"bpm");
  bool issp02normal=IsInsideLimit(spo2,90,100,"spo2");
  bool isrespnormal=IsInsideLimit(respRate,30,95,"respRate");
    return(isbpmnormal && issp02normal && isrespnormal);
   
  
    
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
