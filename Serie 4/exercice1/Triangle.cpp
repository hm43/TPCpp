#include "Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;


Triangle::Triangle(double cote1, double cote2, double cote3):cote1(cote1), cote2(cote2), cote3(cote3){}
Triangle::Triangle(const Triangle &t):cote1(t.cote1), cote2(t.cote2), cote3(t.cote3){}

double Triangle::calculerAire(){
    double s = (cote1 + cote2 + cote3) / 2;
    return sqrt(s * (s - cote1)* (s - cote2)* (s - cote3));
}

double Triangle::calculerPerimetre(){
    return cote1 + cote2 + cote3;
}

void Triangle::afficherInfos() {
    cout<<"Triangle de cote1: "<<cote1<<" cote2: "<<cote2<<" cote3: "<<cote3<<endl;
}