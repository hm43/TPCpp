#include "Rectangle.h"
#include <iostream>
using namespace std;


Rectangle::Rectangle(double longueur, double largeur):longueur(longueur), largeur(largeur){}
Rectangle::Rectangle(const Rectangle &r):longueur(r.longueur), largeur(r.largeur){}

double Rectangle::calculerAire(){
    return longueur * largeur;
}

double Rectangle::calculerPerimetre(){
    return 2*(largeur + longueur);
}

void Rectangle::afficherInfos() {
    cout<<"Rectangle de longueur: "<<longueur<<" et de largeur: "<<largeur<<endl;
}