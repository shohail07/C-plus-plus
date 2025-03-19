#include <iostream>
#include"dynarr.h"
using namespace std;

int main()
{

    dynarr object1();
    dynarr object2(5);
    int value;
    cout<< "Enter five integers : ";
    for(int i=0;i<5;i++)
    {
        cin>>value;
        object2.setValue(i,value);
    }
    cout<< "Array contains : ";
    for(int i=0;i<5;i++)
    {
        cout<<object2.getValue(i)<<" ";
    }
    cout<<endl<<endl;


     cout << "Enter the new array size: ";
    int s;
    cin >> s;
    object2.allocate(s);
    cout << "\nArray with new size : ";
    for (int i = 0; i < s; i++)
        {
            cout << object2.getValue(i)<< " ";
        }
        cout<<endl;
    return 0;
}
