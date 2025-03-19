#include <iostream>
#include "complexx.cpp"
using namespace std;
int main()
{
    complexNum a(1, 2), b(1, 2) , c(3, 4);
    cout <<"Add a, b : ";
    (a + b).print();
    cout <<"substract c from a : ";
    (a - c).print();
    cout <<"Multiply a, b : ";
    (a * c).print();
    if(a == b)
    {
        cout << "a and b are Equal" << endl;
    }
    if(a != c)
    {
        cout <<"a and c are Not equal" << endl;
    }
    return 0;
}
