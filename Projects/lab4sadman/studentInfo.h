
#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

using namespace std;

class StudentInfo{
private:
    string studentID;
    string studentName;
    double cgpa;
public:
    StudentInfo();
    StudentInfo(string, string, double);
    void Print();
    bool operator!=(StudentInfo);
    bool operator==(StudentInfo);
};

#endif // STUDENTINFO_H_INCLUDED
