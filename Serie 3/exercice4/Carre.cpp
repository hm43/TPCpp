#include "Carre.h"
#include <iostream>
using namespace std;

Carre::Carre(double x, double y, double z, double largeur):
Figure(x, y, z),largeur(largeur){}
Carre::Carre(const Carre& c):
Figure(c), largeur(c.largeur){}

void Carre::afficher() const {
    Figure::afficher();
    cout<<" "<<largeur;
}


string Carre::description() const {
    return "Carre";
}