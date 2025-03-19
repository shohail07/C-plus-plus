
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
