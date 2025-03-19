
#include<string>
//#include "timeStamp.h"
using namespace std;

timeStamp::timeStamp(){
    second=0;
    minute=0;
    hour=0;
}

timeStamp::timeStamp(int second, int minute, int hour){
    this->second=second;
    this->minute=minute;
    this->hour=hour;
}

bool timeStamp::operator!=(timeStamp time){
    if(this->second!=time.second){
        return true;
    }else{
        return false;
    }
}

bool timeStamp::operator==(timeStamp time){
    if(this->second==time.second){
        return true;
    }else{
        return false;
    }
}
void timeStamp::Print(){
    cout<<second<<","<<minute<<","<<hour<<endl;
}


