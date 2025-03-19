
#include <iostream>
#include "complex.cpp"
using namespace std;
int main()
{
    complex a(3, 4), b(5, 6), c(2, 1);

    cout <<"adding a and b : ";
    (a + b).print();
    cout <<"substracting c from a : ";
    (a - c).print();
    cout <<"multiplying a, b : ";
    (a * c).print();
    if(a == b)
    {
        cout << "a and b are equal";
    }
    if(a != c)
    {
        cout <<"a and c are not equal";
    }
    return 0;
}
