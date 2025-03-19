
#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
const int MAX_ITEMS=5;
class StudentInfo;
template <class ItemType>
class UnsortedType{
private:
    ItemType info[MAX_ITEMS];
    int Length;
    int currentPos;
public:
    UnsortedType();
    void MakeEmpty();
    bool isEmpty();
    bool IsFull();
    int LengthIs();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetriveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
};

#endif // UNSORTEDTYPE_H_INCLUDED
