
#include "complex.h"
#include <iostream>

using namespace std;

complex::complex()
{
    real = 0;
    imaginary = 0;
}
complex::complex(int r, int i)
{
    real = r;
    imaginary = i;
}
void complex::print()
{
    if (imaginary < 0)
        cout << real << imaginary << "i" << endl;
    else
        cout << real << "+" << imaginary << "i" << endl;
}
complex operator+(complex a, complex b)
{
    return complex((a.real + b.real), (a.imaginary + b.imaginary));
}
complex operator+(complex a, int b)
{
    return complex((a.real + b), (a.imaginary));
}
complex operator+(int a, complex b)
{
    return complex((a + b.real), (b.imaginary));
}
complex operator-(complex a, complex b)
{
    return complex((a.real - b.real), (a.imaginary - b.imaginary));
}
complex operator-(complex a, int b)
{
    return complex((a.real - b), (a.imaginary));
}
complex operator-(int a, complex b)
{
    return complex((a - b.real), (b.imaginary * -1.0));
}
complex operator*(complex a, complex b)
{
    complex c;
    c.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    c.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
    return c;
}
complex operator*(complex a, int b)
{
    return complex((a.real * b), (a.imaginary * b));
}
complex operator*(int a, complex b)
{
    return complex((a * b.real), (a * b.imaginary));
}
bool operator!=(complex a, complex b)
{
    if (a.real != b.real)
        return true;
    if (a.imaginary != b.imaginary)
        return true;
    return false;
}
bool operator!=(complex a, int b)
{
    if (a.real != b)
        return true;
    if (a.imaginary != 0)
        return true;
    return false;
}
bool operator!=(int a, complex b)
{
    if (a != b.real)
        return true;
    if (b.imaginary != 0)
        return true;
    return false;
}
bool operator==(complex a, complex b)
{
    if ((a.real == b.real) && (a.imaginary == b.imaginary))
        return true;
    return false;
}
bool operator==(complex a, int b)
{
    if (a.imaginary != 0)
        return false;
    if (a.real == b)
        return true;
    return false;
}
bool operator==(int a, complex b)
{
    if (b.imaginary != 0)
        return false;
    if (a == b.real)
        return true;
    return false;
}
