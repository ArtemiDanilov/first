//
//  CPoint.cpp
//  first
//
//  Created by Артемий Данилов on 28.10.2021.
//

#include "CPoint.hpp"


CPoint :: CPoint(){f_c = 0;s_c = 0;}
CPoint :: CPoint(int f, int s){f_c = f;s_c = s;}
int CPoint :: get_f(){return f_c;}
int CPoint :: get_s(){return s_c;}
void CPoint :: set(int f, int s){f_c = f;s_c = s;}
void CPoint :: print(){cout << "(" << f_c << "," << s_c << ")" << endl;}
CPoint &CPoint:: operator=(const CPoint &other){this->f_c = other.f_c;this->s_c = other.s_c;return *this;}
