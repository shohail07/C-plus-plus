#include "sortedtype.h"

template <class T>
SortedType<T>::SortedType()
{
    length = 0;
    currentPos = -1;
}

template <class T>
void SortedType<T>::makeEmpty()
{
    length = 0;
}

template <class T>
bool SortedType<T>::isEmpty()
{
    return (length == 0);
}

template <class T>
bool SortedType<T>::isFull()
{
    return (length == max_items);
}

template <class T>
int SortedType<T>::lengthIs()
{
    return length;
}

template <class T>
void SortedType<T>::insertItem(T item)
{
    int location = 0;
    bool moreToSearch = (location < length);

    while (moreToSearch)
    {
        if (item > info[location])
        {
            location++;
            moreToSearch = (location < length);
        }
        else if (item < info[location])
        {
            moreToSearch = false;
        }
    }
    for (int index = length; index > location; index--)
        info[index] = info[index - 1];

    info[location] = item;
    length++;
}

template <class T>
void SortedType<T>::deleteItem(T item)
{
    int location = 0;
    while (item != info[location])
        location++;

    for (int index = location + 1; index < length; index++)
        info[index - 1] = info[index];

    length--;
}

template <class T>
void SortedType<T>::resetList()
{
    currentPos = -1;
}

template <class T>
void SortedType<T>::getNextItem(T &item)
{
    currentPos++;
    item = info[currentPos];
}



template <class T>
void SortedType<T>::retriveItem(T &item, bool &found)
{
    int midPoint, first = 0, last = length - 1;
    bool moreToSearch = (first <= last);
    found = false;

    while (moreToSearch && !found)
    {
        midPoint = (first+last)/2;
        if(item < info[midPoint]){
            last = midPoint-1;
            moreToSearch = (first <= last);
        }else if(item < info[midPoint]){
            first = midPoint+1;
            moreToSearch = (first <= last);
        }else{
            found = true;
            item = info[midPoint];
        }
    }
}
