#include <iostream>
#include "dynarr.h"
using namespace std;
int main()
{
    int row,col;
    cout<< "Enter number of row : ";
    cin>> row;
    cout<< "Enter number of column : ";
    cin>> col;

    cout << "\nArray size is "<<row<<"X"<<col <<"\n\n";
    dynarr object2(row, col);
    int x;
    cout << "Enter elements of the array: ";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            cin >> x;
            object2.setValue(i, j, x);
        }
    cout << "The array: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << object2.getValue(i, j) << " ";
        cout << endl;
    }
    return 0;
}
