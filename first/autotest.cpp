//
//  autotest.cpp
//  first
//
//  Created by Артемий Данилов on 22.10.2021.
//

//#include "CPoint.h" 
#include "CDist.hpp"
#include "Header.hpp"


int autotest_1(){
    CPoint f(0,0);
    CPoint s(3,4);
    CDist f_s(f,s);
    if(f_s.dist() != 5){
        cout <<  "First autotest failed!" << endl;
        return 0;
    }
    return 1;
}

int autotest_2(){
    CPoint f(0,0);
    CPoint s(1,1);
    CDist f_s(f,s);
    CPoint t(10,11);
    f_s.vector(t);
    if(f_s.getp_f() != 11 || f_s.getp_s() != 12){
        cout <<  "Second autotest failed!" << endl;
        return 0;
    }
    return 1;
}

void Autotest(){
    if(autotest_1() == 1 && autotest_2() == 1){
        cout << "All autotests passed" << endl;
    }
}
