#include <iostream>
using namespace std;

int main()
{

    int co = 7/6*4+3/5+3;
    cout<<co;
    int row,r;
    int **A=new int *[row];
    int *col = new int [row];
    cout<<"Enter the number of row:";
    cin>>row;


    for(int p=0; p<row; p++)
    {
        cout<<"Enter the column number of array "<<(p+1)<< ":" <<endl;
        cin>>col[p];
        A[p]=new int[col[p]];

        cout<<"Enter the elements in the array:"<<endl;

        for(int j=0; j<col[p]; j++)
        {
            cin>>A[p][j];
        }
    }

    cout<<"The elements in the array:"<<endl;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col[i]; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    for (int i=0; i<row; i++)
        delete[] A[i];
    delete []A;
    delete []col;
    return 0;
}
