#include "Student.cpp"
#include "UnsortedType.cpp"

int main()
{
    int nmbr,allexm;

    cout<<"Number of students in CSE225 ? ";
    cin>>nmbr;
    cout<<"\nNumber of exams? ";
    cin>>allexm;
    cout<<endl;

    Student students[nmbr];

    for(int i=0; i<nmbr; i++)
    {

        int id;
        string name;
        float cgpa;
        UnsortedType<int> marks;
        int exm;

        cout<<"\nStudent ID: ";
        cin>>id;

        cout<<"Student Name: ";
        cin>>name;

        cout<<"Student CGPA: ";
        cin>>cgpa;

        cout<<"Number of Exams attended: ";
        cin>>exm;

        for(int j=0; j<exm; j++)
        {

            int values;
            cout<<"\tExam "<<(j+1)<<": ";
            cin>>values;
            marks.InsertItem(values);

        }

        students[i] = Student(id,name,cgpa,marks);


    }

    for (int i=0; i<nmbr; i++)
    {
        for (int j=i+1; j<nmbr; j++)
        {

            if (students[i].getId() > students[j].getId())
            {
                Student tmp = students[i];
                students[i] = students[j];
                students[j] = tmp;
            }

        }
    }



    for (int i=0; i<nmbr; i++)
    {

        cout<<"ID: "<<students[i].getId()<<" ; Name: "<<students[i].getName()<<" ; CGPA: "<<students[i].getCgpa()<<" ; Exams: ";

        UnsortedType<int> ob;
        ob=students[i].getMarks();
        for (int j=0; j<students[i].getMarks().LengthIs(); j++)
        {

            int val;
            ob.GetNextItem(val);
            cout << val << " ";
        }
        ob.ResetList();


        int temp[students[i].getMarks().LengthIs()];
        double average = 0;


        ob=students[i].getMarks();
        for (int j=0; j<students[i].getMarks().LengthIs(); j++)
        {
            int val;
            ob.GetNextItem(val);
            temp[j] =val;
        }


        for (int k=0; k<students[i].getMarks().LengthIs(); k++)
        {
            for (int j=k+1; j<students[i].getMarks().LengthIs(); j++)
            {

                if (temp[k] < temp[j])
                {
                    int a = temp[k];
                    temp[k] = temp[j];
                    temp[j] = a;
                }

            }
        }


        for (int j=0; j<allexm-2; j++)
        {
            average += temp[j];
        }

        average /= (allexm-2);

        printf(";Average mark: %.2f", average);
        cout<<endl;

    }

}
