#include "quetype.cpp"
#include <iostream>
using namespace std;
void PrintBinary(int);

int main()
{

    QueType<int> q(5);

    if (q.isEmpty()) cout << "queue is empty\n";
    else cout << "queue is not empty\n";


    int front = q.Front();

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    if (q.isEmpty()) cout << "queue is empty\n";
    else cout << "queue is not empty\n";

    if (q.isFull()) cout << "queue is full\n";
    else cout << "queue is not full\n";

    q.Enqueue(6);
    q.print();

    if (q.isFull()) cout << "queue is full\n";
    else cout << "queue is not full\n";

    q.Enqueue(8);
    q.Dequeue();
    q.Dequeue();

    q.print();

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    if (q.isEmpty()) cout << "queue is empty\n";
    else cout << "queue is not empty\n";

    q.Dequeue();
    q.MakeEmpty();
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.PrintReverse();
    q.print();

    cout << "enter an integer: ";
    int n;
    cin >> n;
    PrintBinary(n);

    return 0;
}
void PrintBinary(int n)
{

    QueType<string> q;


    q.Enqueue("1");

    int copy_n = n;
    while (copy_n--)
    {

        string curr = q.Front();
        q.Dequeue();
        cout << curr << "\n";

        string prev = curr;
        q.Enqueue(curr.append("0"));
        q.Enqueue(prev.append("1"));
    }
}
