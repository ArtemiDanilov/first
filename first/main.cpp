//
//  main.cpp
//  first
//
//  Created by Артемий Данилов on 22.10.2021.
//
#include "Header.hpp"
#include <iostream>
#include "CPoint.hpp"
#include "CDist.hpp"
using namespace std;

ostream &operator<<(ostream &cout,  CPoint &p){cout << "(" << p.get_f() << "," << p.get_s() << ")"; return cout;}

int main() {
    Autotest();
    int first, second, n;
    cout << "Write first coordinate: ";
    cin >> first;
    cout << endl << "Write second coordinate: ";
    cin >> second;
    CPoint first_point(first, second);
    cout << endl << "Write first coordinate: ";
    cin >> first;
    cout << endl << "Write second coordinate: ";
    cin >> second;
    CPoint second_point(first,second);
    CDist f_s;
    f_s = first_point - second_point;
    cout << endl << "What do you want:" << endl << "1.Find the distant between points" << endl << "2.Postpone the received vector from the point" << endl;
    cin >> n;
    if(n == 1){
        cout << "The distance between the points is equal to: " << f_s.dist() << endl;
    }
    if(n == 2){
        cout << "Write first coordinate: ";
        cin >> first;
        cout << endl << "Write second coordinate: ";
        cin >> second;
        CPoint third_point(first, second);
        third_point = third_point + f_s;
        cout << "The coordinates of the received point are: ";
        cout << third_point << endl;
    }
    return 0;
}
