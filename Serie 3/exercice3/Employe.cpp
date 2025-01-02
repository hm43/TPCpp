#include <iostream>
#include "Employe.h"
using namespace std;

Employe::Employe(string nom, int age, double salaire):
nom(nom), age(age), salaire(salaire){}

Employe::Employe(const Employe &e):
nom(e.nom), age(e.age), salaire(e.salaire){}
void Employe::afficherInformation(){
    cout<<"Nom: "<<nom<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Salaire: "<<salaire<<endl;
    
}