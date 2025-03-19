#include"dynarr.h"
#include<iostream>
using namespace std;

dynarr::dynarr()
{
    data =NULL;
    size = 0;
}
dynarr::dynarr(int s)
{
    data = new int[s];
    size = s;
}
dynarr::~dynarr()
{
    delete []data;
}
void dynarr::setValue(int index,int value)
{
    data[index] = value;
}
int dynarr::getValue(int index)
{
    return data[index];
}
void dynarr::allocate(int s)
{
    int *temparray = new int[s];
    for (int i = 0; i < size ; i++)
    {
        temparray[i] = data[i];
    }
    delete[] data;
    data = temparray;

    cout << "\nEnter another "<<s-size<<" integers : ";
    for (int i = size; i < s; i++)
    {
        int num;
        cin>> num;
        data[i] = num;
    }
    size = s;
}
