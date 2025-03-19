
#include <iostream>
#include "dynarr.h"
using namespace std;
int main()
{
    cout << "\nCreating object of size 5X5:\n";
    dynArr2 object3(5, 5);
    int x;
    cout << "Enter values:\n";
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> x;
            object3.setValue(i, j, x);
        }
    cout << "Printing: \n";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << object3.getValue(i, j) << " ";
        cout << endl;
    }
    return 0;
}
