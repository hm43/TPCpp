#include <iostream>
#include "Forme.h"
#include "Cercle.h"

#define PI 3.14

using namespace std;

Cercle::Cercle(double rayon): rayon(rayon){}
Cercle::Cercle(const Cercle &c): rayon(c.rayon){}


double Cercle::calculerAire() {
    return PI* rayon * rayon;
}

double Cercle::calculerPerimetre() {
    return 2 * PI * rayon;
}

void Cercle::afficherInfos(){
    cout<<"Un cercle de rayon: "<<rayon<<endl;
}