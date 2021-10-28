//
//  CDist.cpp
//  first
//
//  Created by Артемий Данилов on 28.10.2021.
//

#include <stdio.h>
#include "CDist.hpp"
#include <math.h>

CDist :: CDist(){v_f = 0; v_s = 0;}
CDist :: CDist(int f, int s){v_f = f; v_s = s;}
CDist :: CDist(CPoint f, CPoint s){v_f = s.get_f() - f.get_f(); v_s = s.get_s() - f.get_s();}
float CDist :: dist(){float d = 0; d = sqrt(v_f*v_f + v_s*v_s);return d;}
void CDist :: vector(CPoint a){v_f += a.get_f(); v_s += a.get_s();}
int CDist :: getp_f(){return v_f;}
int CDist :: getp_s(){return v_s;}
CDist CDist :: operator=(const CDist &other){this->v_f = other.v_f;this->v_s = other.v_s;return *this;}
