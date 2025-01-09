#include <iostream>
#include "Technicien.h"
using namespace std;
Technicien::Technicien(string nom, int age, double salaire, string domaine):
Employe(nom, age, salaire), domaine(domaine){}

Technicien::Technicien(const Technicien &m): 
Employe(m), domaine(m.domaine){}


void Technicien::afficherInformation() const {
    Employe::afficherInformation();
    cout<<"Le domaine: "<<domaine<<endl;
}