#pragma once
#include <iostream>

using namespace std;

class CPoint
{
private:
    int f_c, s_c;
public:
    CPoint();
    CPoint(int f, int s);
    int get_f();
    int get_s();
    void set(int, int);
    void print();
    CPoint &operator=(const CPoint &other);
    friend ostream &operator<<(ostream &cout,CPoint &p);
};
