#include "unsortedtype.cpp"
#include <iostream>
using namespace std;

void show(UnsortedType <int> ut)
{
int num;
for(int c = 0; c < ut.LengthIs(); c++)
{
ut.GetNextItem(num);
cout<<" "<<num;
}
cout<<endl;
ut.ResetList();
}

void searchNum(UnsortedType <int> ut, int num)
{
bool check;
ut.RetrieveItem(num, check);
if(check)
cout<<"\n\n Item is found";
else
cout<<"\n\n Item is not found";
}
int main()
{
bool check;
UnsortedType <int> ut;

ut.InsertItem(5);
ut.InsertItem(7);
ut.InsertItem(6);
ut.InsertItem(9);

show(ut);
cout<<"\n\n Length of the list: "<<ut.LengthIs()<<endl<<endl;
ut.InsertItem(1);

show(ut);
searchNum(ut, 4);
searchNum(ut, 5);
searchNum(ut, 9);
searchNum(ut, 10);

if(ut.IsFull())
cout<<"\n\n List is full.";
else
cout<<"\n\n List is not full.";

ut.DeleteItem(5);

if(ut.IsFull())
cout<<"\n\n List is full.";
else
cout<<"\n\n List is not full.";
cout<<endl;
ut.DeleteItem(1);
show(ut);
ut.DeleteItem(6);
show(ut);

//Create a list of integers
    UnsortedType<int> lst;

    //Insert 4 items
    lst.InsertItem(5);
    lst.InsertItem(7);
    lst.InsertItem(6);
    lst.InsertItem(9);

    //Print list
    int x;
    for(int i=0;i<lst.LengthIs();i++) {
        lst.GetNextItem(x);
        cout << x << " ";
    }

    //Print length of list
    cout << endl  << lst.LengthIs() << endl;

    //Insert one item
    lst.InsertItem(1);


    //print list
    lst.ResetList();
    for(int i=0;i<lst.LengthIs();i++) {
        lst.GetNextItem(x);
        cout << x << " ";
    }

    //Retrieve 4
    x = 4;
    bool f;
    lst.RetrieveItem(x, f);
    if(f) cout << "\nItem is found\n";
    else cout << "\nItem is not found\n";

    x = 5;
    lst.RetrieveItem(x, f);
    if(f) cout << "Item is found\n";
    else cout << "Item is not found\n";

    x = 9;
    lst.RetrieveItem(x, f);
    if(f) cout << "Item is found\n";
    else cout << "Item is not found\n";

    x = 10;
    lst.RetrieveItem(x, f);
    if(f) cout << "Item is found\n";
    else cout << "Item is not found\n";

    //print if the list is full or not
    if(lst.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    //Delete 5
    lst.DeleteItem(5);

    //print if the list is full or not
    if(lst.IsFull()) cout << "List is full\n";
    else cout << "List is not full\n";

    //Delete 1
    lst.DeleteItem(1);

    //print list
    lst.ResetList();
    for(int i=0;i<lst.LengthIs();i++) {
        lst.GetNextItem(x);
        cout << x << " ";
    }

    cout << endl;

    //Delete 6
    lst.DeleteItem(6);

    //print list
    lst.ResetList();
    for(int i=0;i<lst.LengthIs();i++) {
        lst.GetNextItem(x);
        cout << x << " ";
    }

    cout << endl;

    //List of type studentInfo
    UnsortedType<studentInfo> students;
    studentInfo s1(15234, "Jon", 2.6);
    studentInfo s2(13732, "Tyrion", 3.9);
    studentInfo s3(13569, "Sandor", 1.2);
    studentInfo s4(15467, "Ramsey", 3.1);
    studentInfo s5(16285, "Arya", 3.1);

    //Insert 5 records
    students.InsertItem(s1);
    students.InsertItem(s2);
    students.InsertItem(s3);
    students.InsertItem(s4);
    students.InsertItem(s5);


    //Delete record with ID 15467
    students.DeleteItem(s4);

    //Retrieve ID 13569]
    students.RetrieveItem(s3, f);
    if(f) {
        cout << "Item is found\n";
        s3.print();
    } else {
        cout << "Item is not found\n";
    }

    studentInfo s;
    //print the list
    for(int i=0;i<students.LengthIs();i++) {
        students.GetNextItem(s);
        s.print();
    }
    return 0;

}
