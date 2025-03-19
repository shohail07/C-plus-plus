#include "Student.h"

#include<iostream>

using namespace std;

//default constructor
Student::Student(){
}

//parameterized constructor
Student::Student(int id2, string name2,float cgpa2,int marks[]){
//set class variable values
this->id = id2;
this->name = name2;
this->cgpa = cgpa2;
//copy the marks2 vector in marks vector
for (int i=0; i<size; i++)this->marks[i]=marks[i];
}

//function to get student id
int Student::getId(){
return id;
}

//function to get student name
string Student::getName(){
return name;
}

//function to get student cgpa
float Student::getCgpa(){
return cgpa;
}

//function to get student marks
int *Student::getMarks(){
return this->marks;
}
