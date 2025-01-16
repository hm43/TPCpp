#include <iostream>
#include "Forme.h"
#include "Rectangle.h"


using namespace std;

Rectangle::Rectangle(double longueur, double largeur): longueur(longueur), largeur(largeur){}
Rectangle::Rectangle(const Rectangle &r): longueur(r.longueur), largeur(r.largeur){}


double Rectangle::calculerAire() {
    return longueur * largeur;
}

double Rectangle::calculerPerimetre() {
    return 2 * (longueur + largeur);
}

void Rectangle::afficherInfos(){
    cout<<"Un Rectangle de longueur: "<<longueur<<" et de largeur: "<<largeur<<endl;
}