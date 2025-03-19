#ifndef COMPLEXX_H_INCLUDED
#define COMPLEXX_H_INCLUDED

class complexNum
{
    friend complexNum operator+(complexNum, complexNum);
    friend complexNum operator+(complexNum, double);
    friend complexNum operator+(double, complexNum);
    friend complexNum operator-(complexNum, complexNum);
    friend complexNum operator-(complexNum, double);
    friend complexNum operator-(double, complexNum);
    friend complexNum operator*(complexNum, complexNum);
    friend complexNum operator*(complexNum, double);
    friend complexNum operator*(double, complexNum);
    friend bool operator==(complexNum, complexNum);
    friend bool operator==(complexNum, double);
    friend bool operator==(double, complexNum);
    friend bool operator!=(complexNum, complexNum);
    friend bool operator!=(complexNum, double);
    friend bool operator!=(double, complexNum);
    public:
    complexNum();
    complexNum(double, double);
    void print();
    private:
    double Real, Imaginary;
};

#endif // COMPLEXX_H_INCLUDED
