#include "Student.h"

Student::Student()
{
};

Student::Student(int ids, string names,float cgpas, UnsortedType<int> mark)
{


    id = ids;
    name = names;
    cgpa = cgpas;

    for (int i=0; i<mark.LengthIs(); i++)
    {
        int val;
        mark.GetNextItem(val);
        marks.InsertItem(val);
    }
    mark.ResetList();

};

int Student::getId()
{
    return id;
}

string Student::getName()
{
    return name;
}

float Student::getCgpa()
{
    return cgpa;
}

UnsortedType<int> Student::getMarks()
{
    return marks;
}
