
#include "unsortedtype.h"

template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    Length=0;
    currentPos=-1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    Length=0;
}
template<class ItemType>
bool UnsortedType<ItemType>::isEmpty(){
    return (Length==0);
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (Length==MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return Length;
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item)
{
    info[Length]=item;
    Length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item)
{
    int location=0;
    while(item!=info[location])
        location++;
    info[location]=info[Length-1];
    Length--;
}
template <class ItemType>
void UnsortedType<ItemType>::RetriveItem(ItemType& item,bool &found)
{
    int location = 0;
    bool moreToSearch = (location < Length);
    found = false;
    while (moreToSearch && !found)
    {
        if(item == info[location])
        {
            found = true;
            item = info[location];
        }
        else
        {
            location++;
            moreToSearch = (location < Length);
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos=-1;
}
template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info [currentPos] ;
}

