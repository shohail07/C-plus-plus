#include <iostream>
#include "sortedtype.cpp"

using namespace std;

class timeStamp
{
private:
    int ss;
    int mm;
    int hh;

public:

    timeStamp()
    {
        this->hh = 0;
        this->mm = 0;
        this->ss = 0;
    }

    void set(int ss, int mm, int hh)
    {
        this->hh = hh;
        this->mm = mm;
        this->ss = ss;
    }

    bool operator<(const timeStamp &rh)
    {
        if (this->hh < rh.hh)
            return true;
        if (this->mm < rh.mm)
            return true;
        if (this->ss < rh.ss)
            return true;

        return false;
    }

    bool operator>(const timeStamp &rh)
    {
        if (this->hh > rh.hh)
            return true;
        if (this->mm > rh.mm)
            return true;
        if (this->ss > rh.ss)
            return true;

        return false;
    }

    bool operator!=(const timeStamp &rh)
    {
        if (this->hh != rh.hh || this->mm != rh.mm || this->ss != rh.ss)
            return true;
        return false;
    }

    void print()
    {
        cout << ss << ":" << mm << ":" << hh << endl;
    }
};

void printList(SortedType<int> list)
{
    list.resetList();
    for (int i = 0; i < list.lengthIs(); i++)
    {
        int item = 0;
        list.getNextItem(item);
        cout << item << "  ";
    }
    cout << endl;
}

int main()
{

    SortedType<int> list;


    if (list.isEmpty())
    {
        cout << "List is Empty" << endl;
    }
    else
        cout << "List isn't Empty" << endl;




    list.insertItem(5);
    list.insertItem(4);
    list.insertItem(3);
    list.insertItem(1);
    list.insertItem(2);


    printList(list);


    if (list.isFull())
    {
        cout << "List is full"<<endl;
    }
    else
    {
        cout << "List is not full" <<endl;
    }


    list.deleteItem(3);

    cout << endl;
     printList(list);
      cout << endl;

       if (list.isFull())
    {
        cout << "List is full"<<endl;
    }
    else
    {
        cout << "List is not full" <<endl;
    }
     cout << endl;

    SortedType<timeStamp> list2;
    timeStamp t1;
    t1.set(15, 34, 23);
    list2.insertItem(t1);

    timeStamp t2;
    t2.set(45, 12, 12);
    list2.insertItem(t2);

    timeStamp t3;
    t3.set(35, 12, 6);
    list2.insertItem(t3);

    timeStamp t4;
    t4.set(12, 40, 18);
    list2.insertItem(t4);

    timeStamp t5;
    t5.set(12, 12, 12);
    list2.insertItem(t5);


for (int i = 0; i <= list.lengthIs(); i++)
    {
        timeStamp item;
        list2.getNextItem(item);
        item.print();
    }


    list2.deleteItem(t5);
    cout << endl;

    for (int i = 0; i <= list.lengthIs(); i++)
    {
        timeStamp item;
        list2.getNextItem(item);
        item.print();
    }


    cout << endl;

    if (list2.isFull())
    {
        cout << "List is full"<<endl;
    }
    else
    {
        cout << "List is not full" <<endl;
    }
    return 0;
}
