
#include "Student.h"

//default constructor
Student::Student(){
}

//parameterized constructor
Student::Student(int ID, string NAME,float CGPA, UnsortedType<int> MARKS){

        //set class variable values
        id = ID;
        name = NAME;
        cgpa = CGPA;
        //copy the MARKS UnsortedType in marks UnsortedType
        for (int i=0; i<MARKS.LengthIs(); i++)
        {
            int val;
            MARKS.GetNextItem(val);
            marks.InsertItem(val);
        }
        MARKS.ResetList();

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
UnsortedType<int> Student::getMarks(){
        return marks;
}
