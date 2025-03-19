#include <iostream>
using namespace std;

class Node
{

public:
    int value;
    Node *next;
};

class LinkedList
{

private:
    Node *head;

public:
    LinkedList()
    {
        head=NULL;
    }

    void InsertAtFirst(int val)
    {
        Node *n = new Node;
        n->value = val;
        n->next = NULL;

        if(head == NULL)
        {
            head = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
    }

    void InsertAtLast(int val)
    {
        Node *n = new Node;
        n->value = val;
        n->next = NULL;

        if(head == NULL)
        {
            head = n;
        }
        else
        {
            Node *t1 = head;
            while(t1->next != NULL)
            {
                t1 = t1->next;
            }
            t1->next = n;
            n->next = NULL;

        }
    }

    void InsertPosition(int val, int pos)
    {

        Node *n = new Node;
        n->value = val;
        n->next = NULL;
        Node *p = head;

        if(pos==0)
        {
            n->next = head;
            head = n;
            return;
        }

        for(int i = 0; i < pos-1; i++)
        {
            p = p->next;
        }
        n->next = p->next;
        p->next = n;

    }

    void DeleteAtFirst()
    {

        if(head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            delete head;
        }

    }

    void DeleteAtLast()
    {

        if(head != NULL)
        {
            Node *t1 = head;
            Node *t2 = head;
            while(t1->next != NULL)
            {
                t2 = t1;
                t1 = t1->next;
            }
            t2->next = NULL;
            delete t1;
        }
        else
        {
            delete head;
        }

    }

    void DeletePosition(int position)
    {

        if(head != NULL)
        {
            Node *t1 = head;
            Node *t2;
            int i = 0;
            while(i < position - 1)
            {
                t1 =  t1->next;
                i++;
            }
            t2 = t1->next;
            t1->next = t2->next;
            delete t2;
        }

        else
        {
            delete head;
        }
    }

    void DeleteValur(int val)
    {

        if(head != NULL)
        {
            Node *t1 = NULL;
            Node *t2 = head;
            while(t2 != NULL)
            {
                if(t2->value == val)
                {
                    if(t1 != NULL)
                    {
                        t1->next = t2->next;
                    }
                    delete t2;
                    t2 = t1->next;
                }

                else
                {
                    t1 = t2;
                    t2 = t2->next;
                }

            }
        }
    }

    void Print()
    {
        Node *p = head;
        while(p != NULL)
        {
            cout<<p->value<<" ";
            p = p->next;
        }
        cout<<endl;

    }

    void Reverse()
    {

        Node *temp = head;
        LinkedList list2;
        while(temp != NULL)
        {
            list2.InsertAtFirst(temp->value);
            temp = temp->next;
        }
        list2.Print();
    }

};

int main()
{
    LinkedList list;

    list.InsertAtFirst(4);
    list.InsertAtFirst(3);
    list.InsertAtFirst(2);
    list.InsertAtFirst(1);
    list.Print();
    list.DeleteAtFirst();
    list.DeleteAtLast();
    list.Print();
    list.InsertAtLast(5);
    list.Print();
    list.Reverse();

    cout<<endl<<"Enter the position : ";

    int position;
    cin>>position;
    list.DeletePosition(position-1);
    list.Print();
    list.DeleteValur(2);
    list.Print();

    return 0;
}
