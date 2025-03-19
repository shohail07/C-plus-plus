#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Row size : ";
    cin>>row;
    int **DynArr3=new int *[row];

    int* col;
    col = new int [row];

    for(int i=0; i<row; i++)
    {
        cout<<"Number of columns in array "<<i+1<<": ";
        cin>>col[i];
        DynArr3[i]=new int[col[i]];

        cout<<"Enter the elements :"<<endl;

        for(int j=0; j<col[i]; j++)
        {
            cin>>DynArr3[i][j];
        }
    }
    cout<<endl;

    cout<<"Array elements :"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            cout<<DynArr3[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<row; ++i)
    {
        delete[] DynArr3[i];
    }

    delete []DynArr3;
    delete []col;

    return 0;
}
