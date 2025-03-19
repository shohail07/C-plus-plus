#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Array size : ";
    cin >> size;

    int *DynArr;
    DynArr = new int[size];
    for (int i = 0; i < size; i++)
    {

        cout << "[" << i << "] : ";
        cin >> DynArr[i];
    }

    cout <<endl;
    for (int i = 0; i < size; i++)
    {

        cout << "[" << i << "] : " << DynArr[i];
        cout <<endl;
    }

    delete[] DynArr;
    cout << endl;

    return 0;
}
