#include "quetype.cpp"
#include <iostream>
using namespace std;


 QueType()
    {
        rear = front = 0;
        capacity = max_items;
    }
    QueType(int size)
    {
        rear = front = 0;
        capacity = size;
    }
    void MakeEmpty()
    {
        rear = front = 0;
    }
    bool isEmpty()
    {
        return rear == front;
    }
    bool isFull()
    {
        return rear == capacity;
    }
    void Enqueue(T elem)
    {
       if (!isFull()) info[rear++] = elem;
        else std::cout << "Queue is already full\n";

    }
    void Dequeue()
    {
        if (!isEmpty()) front++;
        else std::cout << "Queue is already empty\n";
    }
    T Front()
    {
       if (!isEmpty()) return info[front];
        else std::cout << "No data to return\n";
       return 0;
    }
    void print()
    {
        int counter = front;
        while (counter < rear)
        {
            std::cout << info[counter++] << " ";
        }
        std::cout << "\n";
    }

    void PrintReverse()
    {

        if (isEmpty())
        {
            std::cout << "queue is empty!\n";
            return;
        }

        int counter = rear - 1;
        while (counter >= front)
        {
            std::cout << info[counter--] << " ";
        }
        std::cout << "\n";
    }
