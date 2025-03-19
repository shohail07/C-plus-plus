
#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;


//class studentInfo
class studentInfo {
    public:
    int ID;
    string name;
    double cgpa;

    studentInfo() {
        ID = 0;
        name = "";
        cgpa = 0.0;
    }

    studentInfo(int i, string n, double c) {
        ID = i;
        name = n;
        cgpa = c;
    }
    bool operator==(studentInfo &other) {
        return ID==other.ID && name == other.name && cgpa == other.cgpa;
    }
    bool operator!=(studentInfo &other) {
        return ID!=other.ID || name != other.name || cgpa != other.cgpa;
    }
    void print() {
        cout << ID << ", " << name << ", " << cgpa << endl;
    }
};
