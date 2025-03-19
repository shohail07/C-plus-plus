#include <iostream>
#include"StackType.cpp"
using namespace std;

void displayStack(StackType<int>);
void getMax(StackType<int> &, int &);
bool isBalance(string);

int main()
{

    StackType<int> st1;

    if(st1.isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;
    try
    {

        st1.Push(5);
        st1.Push(7);
        st1.Push(4);
        st1.Push(2);
    }
    catch(FullStack fs)
    {
        cout<<"Stack is already full"<<endl;
    }

    if(st1.isEmpty())
        cout<<"Stack is Empty"<<endl;
    else
        cout<<"Stack is not Empty"<<endl;

    if(st1.isFull())
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;

    displayStack(st1);
    cout<<endl;
    try
    {

        st1.Push(3);
        st1.Push(7);
        st1.Push(4);
        st1.Push(2);
    }
    catch(FullStack fs)
    {
        cout<<"Stack is already full"<<endl;
    }

    displayStack(st1);
    cout<<endl;

    if(st1.isFull())
        cout<<"Stack is Full"<<endl;
    else
        cout<<"Stack is not Full"<<endl;
    try
    {

        st1.Pop();
        st1.Pop();
    }
    catch(EmptyStack es)
    {
        cout<<"Stack is already empty"<<endl;
    }

    cout<<"Top item = "<<st1.Top()<<endl;
    try
    {

        st1.Push(9);
        st1.Push(8);
        st1.Push(10);
    }
    catch(FullStack fs)
    {
        cout<<"Stack is already full"<<endl;
    }


    int max = st1.Top();
    getMax(st1, max);
    cout<<"The biggest value in the stack: "<<max<<endl;

    displayStack(st1);
    cout<<endl;


    string str;
    cout<<"Enter a string of parenthesis: ";
    cin>>str;
    if(isBalance(str))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

    cout<<"Enter a string of parenthesis: ";
    cin>>str;
    if(isBalance(str))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

    cout<<"Enter a string of parenthesis: ";
    cin>>str;
    if(isBalance(str))
        cout<<"Balanced"<<endl;
    else
        cout<<"Not Balanced"<<endl;

    return 0;
}

void displayStack(StackType<int> s)
{
    if(s.isEmpty())
        return;
    int item = s.Top();
    s.Pop();
    displayStack(s);
    cout<<item<<" ";
    s.Push(item);
}

void getMax(StackType<int> &s, int &max)
{
    if(s.isEmpty())
        return;
    int item = s.Top();
    s.Pop();
    if(item>max)
        max = item;
    getMax(s, max);
    s.Push(item);
}

bool isBalance(string s)
{

    StackType<char> stk;

    for(unsigned i=0; i<s.size(); i++)
    {

        if(s[i]=='(')
        {

            stk.Push(s[i]);
        }
        else if(s[i]==')')
        {

            if(stk.isEmpty()) return false;

            if(stk.Top()=='(') stk.Pop();
        }
    }
    if(stk.isEmpty()) return true;


    return false;
}
