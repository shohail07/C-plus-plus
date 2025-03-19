
#include "dynarr.h"
#include <iostream>
using namespace std;
dynarr2::dynarr2()
{
    data = NULL;
    r = 0;
    c = 0;
}

dynarr2::dynarr2(int row, int column)
{
    r = row;
    c = column;
    data = new int *[r];
    for (int i = 0; i < r; ++i)
        data[i] = new int[c];
}

dynarr2::~dynarr2()
{
    for (int i = 0; i < r; ++i)
    {
        delete[] data[i];
    }
    delete[] data;
}

int dynarr2::getValue(int row, int column)
{
    return data[row][column];
}
void dynarr2::setValue(int row, int column, int value)
{
    data[row][column] = value;
}
