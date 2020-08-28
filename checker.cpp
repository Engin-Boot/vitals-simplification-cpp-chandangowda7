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

bool IsInsideLimit(float value,int lowerLimit,int upperLimit)
{
  return(value>=lowerLimit && value<=upperLimit);
}
  
  
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  bool isbpmnormal=IsInsideLimit(bpm,70,150);
  bool issp02normal=IsInsideLimit(spo2,90,100);
  bool isrespnormal=IsInsideLimit(respRate,30,95);
    if(isbpmnormal && issp02normal && isrespnormal)
    {
      if(!isbpmnormal)
      {
        AlertWithMsg obj;
        obj.raiseAlert("bpm","out of range");
      }
      return false;
    }
  return true;
  
    
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
