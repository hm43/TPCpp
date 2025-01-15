#include "Carre.h"
#include <iostream>

using namespace std;

Carre::Carre(double x, double y, double z,double cote):
Figure(x, y, z), cote(cote){}
Carre::Carre(const Carre &c): Figure(c),cote(c.cote){}

string Carre::description() const{
    return "Carre";
}
void Carre::afficher() const{
    Figure::afficher();
    cout<<" "<<cote;
}