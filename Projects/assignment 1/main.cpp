#include "Student.cpp"
#include <bits/stdc++.h>


int main(){



//variable for number of student and e
int n,e;
//user input for the two variable
cout<<"\nNumber of students in CSE225? ";
cin>>n;
cout<<"\nNumber of Es? ";
cin>>e;
cout<<endl;

//crate an array of student object
Student stu[n];

//take input for each student
for(int i=0;i<n;i++){

//variables to hold input values
int id;
string name;
float cgpa;
int es;
int marks[5];

//input id
cout<<"\nStudent ID: ";
cin>>id;

//input name
cout<<"Student Name: ";
cin>>name;

//input cgpa
cout<<"Student CGPA: ";
cin>>cgpa;

//input no of e
cout<<"Number of es attended: ";
cin>>es;

//input marks for each e
for(int j=0;j<es;j++){

int value;
cout<<"\tE "<<(j+1)<<": ";
cin>>value;
marks[j]=value;

}

//add info to each student object
stu[i] = Student(id,name,cgpa,marks);


}


//sort student in ascending order of id
for (int i=0;i<n;++i) {
for (int j=i+1;j<n;++j) {

if (stu[i].getId() > stu[j].getId())
{
Student a = stu[i];
stu[i] = stu[j];
stu[j] = a;
}

}
}



//print students
for (int i=0;i<n;++i) {

//print id , name, cgpa
cout<<"ID: "<<stu[i].getId()
<<" ; Name: "<<stu[i].getName()
<<" ; CGPA: "<<stu[i].getCgpa()
<<" ; Es: ";

//print e marks
for (int j=0; j<stu[i].size; j++)
cout << stu[i].getMarks()[j] << ", ";


int temp[stu[i].size];
double average = 0;


//add marks to array
for (int j=0; j<stu[i].size; j++)
temp[j] = stu[i].getMarks()[j];

//sort array in descending order
for (int k=0;k<stu[i].size;++k) {
for (int j=k+1;j<stu[i].size;++j) {

if (temp[k] < temp[j])
{
int a = temp[k];
temp[k] = temp[j];
temp[j] = a;
}

}
}


//add all marks, except for last 2 (last 2 are smallest)
for (int j=0; j<e-2; j++){
average += temp[j];
}

//get average
average /= (e-2);

//print average
printf(";Average mark: %.2f", average);
cout<<endl;

}

return 0;
}
