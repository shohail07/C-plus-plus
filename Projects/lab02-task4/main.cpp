#include <iostream>
#include"dynarr.cpp"
using namespace std;

int main()
{
    int n;
    dynarr<int> object1(5);

    cout << "Enter 5 integer : ";
    for ( int i=0;i<5; i++)
    {
        cin>>n;
        object1.setValue(i,n);
    }
    cout<< "\nArray contains : ";
    for (int i=0;i<5; i++)
    {
        cout<<object1.getValue(i)<<" ";
    }
    cout<<endl;

    char c;
    dynarr<char> object2(5);
    cout << "\nEnter 5 character : ";

    for (int i=0;i<5; i++)
    {
        cin>>c;
        object2.setValue(i,c);
    }
     cout<< "\nChar Array contains : ";
    for (int i=0;i<5; i++)
    {
        cout<<object2.getValue(i)<<" ";
    }

    float f;
    dynarr<float> object3(5);
    cout << "\nEnter 5 float number : ";

    for (int i=0;i<5; i++)
    {
        cin>>f;
        object3.setValue(i,f);
    }
     cout<< "\nFloat Array contains : ";
    for (int i=0;i<5; i++)
    {
        cout<<object3.getValue(i)<<" ";
    }
    cout<<endl;
    return 0;
}
