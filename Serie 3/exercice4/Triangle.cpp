#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle(double x, double y, double z, double base, double cote1, double cote2, double hauteur):
Figure(x, y, z), base(base), cote1(cote1), cote2(cote2), hauteur(hauteur){}
Triangle::Triangle(const Triangle& t):
Figure(t), base(t.base), cote1(t.cote1), cote2(t.cote2), hauteur(t.hauteur){}

void Triangle::afficher() const {
    Figure::afficher();
    cout<<" "<<base<<" "<<cote1<<" "<<cote2<<" "<<hauteur;
}


string Triangle::description() const {
    return "Triangle";
}