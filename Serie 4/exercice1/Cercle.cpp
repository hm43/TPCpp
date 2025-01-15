#include "Cercle.h"
#include <iostream>
using namespace std;

#define PI 3.14

Cercle::Cercle(double rayon): rayon(rayon) {}
Cercle::Cercle(const Cercle & c): rayon(c.rayon){}

double Cercle::calculerAire(){
    return PI * rayon * rayon;
}

double Cercle::calculerPerimetre(){
    return 2 * PI * rayon;
}

void Cercle::afficherInfos(){
    cout<<"Cercle de rayon: "<<rayon<<endl;
}