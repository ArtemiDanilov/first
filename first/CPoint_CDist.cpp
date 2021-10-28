//
//  CPoint_CDist.cpp
//  first
//
//  Created by Артемий Данилов on 28.10.2021.
//

#include <stdio.h>
#include "CPCD.hpp"

CPoint operator+(CPoint A, CDist a){CPoint rez(A.get_f() + a.getp_f(), A.get_s() + a.getp_s()); return rez;}
CPoint operator+(CDist a, CPoint A){CPoint rez(A.get_f() + a.getp_f(), A.get_s() + a.getp_s()); return rez;}
CDist operator-(CPoint A, CPoint B){CDist rez(A,B); return rez;}
