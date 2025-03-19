
#include <iostream>
#include "complexx.h"
using namespace std;

complexNum::complexNum()
{
    Real = 0;
    Imaginary = 0;
}
complexNum::complexNum(double r, double i)
{
    Real = r;
    Imaginary = i;
}
void complexNum::print()
{
    if (Imaginary < 0)
        cout << Real << Imaginary << "i" << endl;
    else
        cout << Real << "+" << Imaginary << "i" << endl;
}
complexNum operator+(complexNum a, complexNum b)
{
    return complexNum((a.Real + b.Real), (a.Imaginary + b.Imaginary));
}
complexNum operator+(complexNum a, double b)
{
    return complexNum((a.Real + b), (a.Imaginary));
}
complexNum operator+(double a, complexNum b)
{
    return complexNum((a + b.Real), (b.Imaginary));
}
complexNum operator-(complexNum a, complexNum b)
{
    return complexNum((a.Real - b.Real), (a.Imaginary - b.Imaginary));
}
complexNum operator-(complexNum a, double b)
{
    return complexNum((a.Real - b), (a.Imaginary));
}
complexNum operator-(double a, complexNum b)
{
    return complexNum((a - b.Real), (b.Imaginary * -1.0));
}
complexNum operator*(complexNum a, complexNum b)
{
    complexNum c;
    c.Real = (a.Real * b.Real) - (a.Imaginary * b.Imaginary);
    c.Imaginary = (a.Real * b.Imaginary) + (a.Imaginary * b.Real);
    return c;
}
complexNum operator*(complexNum a, double b)
{
    return complexNum((a.Real * b), (a.Imaginary * b));
}
complexNum operator*(double a, complexNum b)
{
    return complexNum((a * b.Real), (a * b.Imaginary));
}
bool operator!=(complexNum a, complexNum b)
{
    if (a.Real != b.Real)
        return true;
    if (a.Imaginary != b.Imaginary)
        return true;
    return false;
}
bool operator!=(complexNum a, double b)
{
    if (a.Real != b)
        return true;
    if (a.Imaginary != 0)
        return true;
    return false;
}
bool operator!=(double a, complexNum b)
{
    if (a != b.Real)
        return true;
    if (b.Imaginary != 0)
        return true;
    return false;
}
bool operator==(complexNum a, complexNum b)
{
    if ((a.Real == b.Real) && (a.Imaginary == b.Imaginary))
        return true;
    return false;
}
bool operator==(complexNum a, double b)
{
    if (a.Imaginary != 0)
        return false;
    if (a.Real == b)
        return true;
    return false;
}
bool operator==(double a, complexNum b)
{
    if (b.Imaginary != 0)
        return false;
    if (a == b.Real)
        return true;
    return false;
}
