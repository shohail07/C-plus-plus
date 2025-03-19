
#include <iostream>
#include "unsortedtype.cpp"
#include "StudentInfo.cpp"
#include "unsortedtype.h"
#include <cstdlib>

using namespace std;

int main()
{
    //Creating Unsorted Type List Object;
    UnsortedType<int>uList;

    //Inserting elements 5,7,6,9
    uList.InsertItem(5);
    uList.InsertItem(7);
    uList.InsertItem(6);
    uList.InsertItem(9);

    //Print the list
    cout<<"The unsorted list elements are:"<<endl;
    int temp;
    for(int i = 0; i < 4; i++)
    {
        uList.GetNextItem(temp);
        cout<<temp<<"  ";
    }
    cout<<endl<<endl;

    //Print the length of the list
    cout<<"The length of the unsorted list is:"<<uList.LengthIs()<<endl<<endl;

    //Insert one item and print the list after insertion
    uList.InsertItem(1);
    uList.ResetList();
    cout<<"The unsorted list elements after insertion one:"<<endl;
    int temp2;
    for(int i = 0; i < uList.LengthIs(); i++)
    {
        uList.GetNextItem(temp2);
        cout<<temp2<<"  ";
    }
    cout<<endl<<endl;
    uList.ResetList();

    //Retrieving items 4,5,9,10
    int item[4];
    item[0] = 4;
    item[1] = 5;
    item[2] = 9;
    item[3] = 10;
    bool found;

    for(int i = 0; i < 4; i++)
    {
        cout<<"Retrieve for "<<item[i]<<":";
        uList.RetrieveItem(item[i], found);
        if(found == true)
        {
            cout<<"Item is found";
        }
        else
        {
            cout<<"Item is not found";
        }
        cout<<endl;
    }
    cout<<endl;

    //The list is full or not
    if(uList.IsFull()==1)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }
    cout<<endl;

    //Delete item: 5
    uList.DeleteItem(5);

    cout<<"After deleting 5:"<<endl;
    if(uList.IsFull()==1)
    {
        cout<<"List is full"<<endl;
    }
    else
    {
        cout<<"List is not full"<<endl;
    }
    cout<<endl;

    //Delete item: 1
    uList.DeleteItem(1);
    uList.ResetList();
    cout<<"After deleting 1 print the list:"<<endl;
    int temp3;
    for(int i = 0; i < uList.LengthIs(); i++)
    {
        uList.GetNextItem(temp3);
        cout<<temp3<<"  ";
    }
    cout<<endl<<endl;

    //Delete item: 6
    uList.DeleteItem(6);
    uList.ResetList();
    cout<<"After deleting 6 print the list:"<<endl;
    int temp4;
    for(int i = 0; i < uList.LengthIs(); i++)
    {
        uList.GetNextItem(temp4);
        cout<<temp4<<"  ";
    }
    cout<<endl<<endl;

    cout<<"STUDENT INFORMATION CLASS"<<endl<<endl;

    //Creating five student objects
    StudentInfo student1("15234", "Jon", 2.6);
    StudentInfo student2("13732", "Tyrion", 3.9);
    StudentInfo student3("13569", "Sandor", 1.2);
    StudentInfo student4("15467", "Ramsey2", 3.1);
    StudentInfo student5("16285", "Arya", 3.1);

    UnsortedType<StudentInfo>uList2;
    uList2.InsertItem(student1);
    uList2.InsertItem(student2);
    uList2.InsertItem(student3);
    uList2.InsertItem(student4);
    uList2.InsertItem(student5);

    //Delete the record with ID 15467
    StudentInfo deleteStud("15467", "Ramsey",3.1);
    uList2.DeleteItem(deleteStud);

    //Retrieve the record with ID 13569 and print whether found or not along with the entire record
    StudentInfo retrieveStud("13569", "Sandor", 1.2);
    bool found2;
    uList2.RetrieveItem(retrieveStud,found2);
    cout<<"If ID 13569 is exist or not:"<<endl;
    if(found2==true)
    {

        cout<<"Item is found"<<endl;
        retrieveStud.Print();

    }
    else
    {
        cout<<"Item is not found";
    }

    cout<<endl<<endl;


    //Print the list
    cout<<"Print the list:"<<endl;
    StudentInfo temp5;
    for(int i=0; i<uList2.LengthIs(); i++)
    {
        uList2.GetNextItem(temp5);
        temp5.Print();
    }

    return 0;
}
