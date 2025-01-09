#include <iostream>
#include "Directeur.h"
using namespace std;
Directeur::Directeur(string nom, int age, double salaire, string objectifs):
Employe(nom, age, salaire), objectifs(objectifs){}

Directeur::Directeur(const Directeur &m): 
Employe(m), objectifs(m.objectifs){}


void Directeur::afficherInformation(){
    Employe::afficherInformation();
    cout<<"Le objectifs strategiques: "<<objectifs<<endl;
}