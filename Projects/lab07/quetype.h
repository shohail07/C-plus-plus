#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
#include <iostream>
const int max_items = 50;

template<class T>
class QueType
{
public:
    QueType();
    void MakeEmpty();
    bool isEmpty();
    bool isFull();
    void Enqueue(T);
    void Dequeue();
    T Front();

private:
    int front;
    int rear;
    T info[max_items];
};

#endif // QUETYPE_H_INCLUDED
