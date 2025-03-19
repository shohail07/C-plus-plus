
#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

class timeStamp
    [
        private :
        int ss;
        int mm;
        int hh;

        public :
        timeStamp();
        void set(int, int, int );
        bool operator<(const timeStamp& );
        bool operator>(const timeStamp& );
        bool operator!=(const timeStamp& ):
        void print();

        void printList(SortedType<int> list)
    ]
