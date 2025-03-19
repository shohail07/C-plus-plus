#include "dynarr.h"
#include <iostream>
using namespace std;
dynarr::dynarr()
{
    data = NULL;

}

dynarr::dynarr(int row, int column)
{
    int r = row;
    int c = column;
    data = new int *[r];
    for (int i = 0; i < r; i++)
        data[i] = new int[c];
}

dynarr::~dynarr()
{
    int r;
    for (int i = 0; i < r; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

int dynarr::getValue(int row, int col)
{
    return data[row][col];
}
void dynarr::setValue(int row, int col, int value)
{
    data[row][col] = value;
}
