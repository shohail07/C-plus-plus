#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED


class dynarr{
private:
    int **data;
    int row,col;
public:
    dynarr();
    dynarr(int,int);
    ~dynarr();
    void setValue(int , int, int);
    int getValue(int,int);

};


#endif // DYNARR_H_INCLUDED
