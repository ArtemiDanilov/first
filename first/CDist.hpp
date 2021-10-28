#pragma once
#include "CPoint.hpp"


class CDist
{
private:
    int v_f, v_s;
public:
    CDist();
    CDist(int f, int s);
    CDist(CPoint, CPoint);
    float dist();
    void vector(CPoint);
    int getp_f();
    int getp_s();
    CDist operator =(const CDist &other);
};
