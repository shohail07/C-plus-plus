#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Row size: " ;
    cin >> row;
    cout << "Column size: " ;
    cin >> col;


    char **DynArr2 = new char*[row];
    for (int i = 0; i < row; i++)
    {
        DynArr2[i] = new char[col];
    }


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "["<<i<<"] "<<"["<<j<<"] : ";
            cin >> DynArr2[i][j];
        }

    }
    cout << endl;
    cout << "Strings :";

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        cout<<"\t";
        for (int j = 0; j < col; j++)
        {

            cout << DynArr2[i][j] ;
        }
        cout << endl;

    }

    for (int i = 0; i < row; ++i)
    {
        delete[] DynArr2[i];
    }
    delete[] DynArr2;

    return 0;
}
