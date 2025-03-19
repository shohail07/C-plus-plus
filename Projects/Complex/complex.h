
#ifndef COMPLEX_H_INCLUDED
#define COMPLEX H INCLUDED
class complex
{

    friend complex operator-(complex, complex);
    friend complex operator-(complex, int);
    friend complex operator-(int, complex);
    friend complex operator*(complex, complex);
    friend complex operator*(complex, int);
    friend complex operator*(int, complex);
    friend bool operator!=(complex, complex);
    friend bool operator!=(complex, int);
    friend bool operator!=(int, complex);
    friend complex operator+(complex, complex);
    friend complex operator+(complex, int);
    friend complex operator+(int, complex);
    friend bool operator==(complex, complex);
    friend bool operator==(complex, int);
    friend bool operator==(int, complex);

    public:
    complex();
    complex(int, int);
    void print();
    private:
    int real, imaginary;
};
#endif
