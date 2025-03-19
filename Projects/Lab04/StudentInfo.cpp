#include<string>
#include "StudentInfo.h"
using namespace std;

StudentInfo::StudentInfo(){
    studentID="null";
    studentName="null";
    cgpa=0;
}

StudentInfo::StudentInfo(string studentID, string studentName, double cgpa){
    this->studentID=studentID;
    this->studentName=studentName;
    this->cgpa=cgpa;
}

bool StudentInfo::operator!=(StudentInfo student){
    if(this->studentID!=student.studentID){
        return true;
    }else{
        return false;
    }
}

bool StudentInfo::operator==(StudentInfo student){
    if(this->studentID==student.studentID){
        return true;
    }else{
        return false;
    }
}
void StudentInfo::Print(){
    cout<<studentID<<","<<studentName<<","<<cgpa<<endl;
}


