#include<iostream>
#include <math.h>

using namespace std;

int fib(int);
int factorial(int);
int sumOfDigits(int);
int findMin(int[],int);
int DecToBin(int);
double sumOfSeries(int);


int main()
{
    cout << "6th Fibonacci:   " << fib(6) << endl<< endl;
    cout << "8 ! :   " << factorial(8) << endl<< endl;
    cout << "Sum of digit of 15261 :\t" << sumOfDigits(15261) << endl<< endl;
    int array[8] = {61,18,59,41,79,35,53,27};
    cout << "Min in 61,18,59,41,79,35,53,27  :  " << findMin(array,8) << endl<< endl;
    cout << "Binary of 17:   " << DecToBin(17) << endl<< endl;
    cout << "Sum of series of 15 terms:  " << sumOfSeries(15) << endl<< endl;

}
//1
int fib(int n)
{
    if(n==1 || n==2)
        return (n-1);
    else
        return (fib(n-1) + fib(n-2));
}
//2
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
//3
int sumOfDigits(int x)
{
    if(x<10)
        return x;
    else
        return (x%10 + sumOfDigits(x/10));
}
//4
int findMin(int a[],int size)
{
    if(size==1)
        return a[0];
    int pre,cur;
    pre = findMin(a,size-1);
    cur = a[size-1];
    if(pre < cur)
        return pre;
    else
        return cur;
}
//5
int DecToBin(int dec)
{
    if(dec == 0)
        return dec;
    else
        return (DecToBin(dec/2)*10 + dec%2);
}
//6
double sumOfSeries(int n)
{
    if(n < 0)
        return 0;
    //double denominator = (double)(pow(2,n));
    double term = 1.0/(double)(pow(2,n));
    return (term + sumOfSeries(n-1));
}
