#include<iostream>

using namespace std;

class Student{

//private variables
private:
int id;
string name;
float cgpa;
int marks[21]; // Using the most basic way to store element i.e. array
//Only 5 subjects marks could be added and if you want to increase then increase the value of size.
//methods
public:
static const int size=5; // fixed size would be used to store the marks of subject.
Student();
Student(int id2, string name2,float cgpa2,int * marks);
int getId();
string getName();
float getCgpa();
int *getMarks();

};
