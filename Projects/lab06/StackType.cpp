#include"StackType.h"

template<class T>
StackType<T>::StackType():top(-1) {}

template<class T>
bool StackType<T>::isFull()
{
    return top==max_items-1;
}

template<class T>
bool StackType<T>::isEmpty()
{
    return top==-1;
}

template<class T>
void StackType<T>::Push(T x)
{
    if(isFull())
        throw FullStack();
    top++;
    info[top] = x;
}

template<class T>
void StackType<T>::Pop()
{
    if(isEmpty())
        throw EmptyStack();
    top--;
}

template<class T>
T StackType<T>::Top()
{
    if(isEmpty())
        throw EmptyStack();
    return info[top];
}
