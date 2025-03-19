#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynarr{
private:
    int *data;
    int size;
public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void setValue(int , int);
    int getValue(int);

};

#endif // DYNARR_H_INCLUDED
