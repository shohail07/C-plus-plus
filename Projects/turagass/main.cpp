#include "Student.cpp"
#include "UnsortedType.cpp"
#include <bits/stdc++.h>

//main function
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
        Student students[n];





        //take input for each student
        for(int i=0;i<n;i++){

                //variables to hold input values
                int id;
                string name;
                float cgpa;
                int es;
                UnsortedType<int> marks;

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
                        marks.InsertItem(value);

                }

                //add info to each student object
                students[i] = Student(id,name,cgpa,marks);


        }




        //sort student in ascending order of id
        for (int i=0;i<n;++i) {
        for (int j=i+1;j<n;++j) {

                        if (students[i].getId() > students[j].getId())
            {
                Student a = students[i];
                students[i] = students[j];
                students[j] = a;
            }

        }
    }



    //print students
    for (int i=0;i<n;++i) {

        //print id , name, cgpa
        cout<<"ID: "<<students[i].getId()
                <<" ; Name: "<<students[i].getName()
                <<" ; CGPA: "<<students[i].getCgpa()
                <<" ; Es: ";

                //print e marks
                UnsortedType<int> l;
                l=students[i].getMarks();
                for (int j=0; j<students[i].getMarks().LengthIs(); j++)
                {

                    int val;
                    l.GetNextItem(val);
                    cout << val << ", ";
                }
                l.ResetList();


                //array to hold marks, to get average
        int temp[students[i].getMarks().LengthIs()];
        double average = 0;


        //add marks to array
        l=students[i].getMarks();
        for (int j=0; j<students[i].getMarks().LengthIs(); j++)
                {
                    int val;
                    l.GetNextItem(val);
                    temp[j] =val;
                }


        //sort array in descending order
        for (int k=0;k<students[i].getMarks().LengthIs();++k) {
                for (int j=k+1;j<students[i].getMarks().LengthIs();++j) {

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

}
