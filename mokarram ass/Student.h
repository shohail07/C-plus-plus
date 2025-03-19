
#include<iostream>
#include "UnsortedType.h"
using namespace std;

class Student
{

private:
    int id;
    string name;
    float cgpa;
    UnsortedType<int> marks;

public:
    Student();
    Student(int id2, string name2,float cgpa2,UnsortedType<int> marks2);
    int getId();
    string getName();
    float getCgpa();
    UnsortedType<int> getMarks();

};
