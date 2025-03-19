#include<iostream>
using namespace std;

void show(int **arr,int x,int y)
{
	int i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{


	int p,z;
	cout<<"Enter No. of rows: ";
	cin>>p;
	cout<<"Enter No. of columns: ";
	cin>>z;


	int **A=new int*[p];

	for(int i=0;i<p;i++)
	{
		A[i]=new int[z];
	}

	//input array elements
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<z;j++)
		{
			cin>>A[i][j];
		}
	}
	show(A,p,z);

	return 0;
}
