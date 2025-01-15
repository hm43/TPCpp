#include "Employe.h"
#include<iostream>

using namespace std;

Employe::Employe(string nom, int age, double salaire):nom(nom), age(age), salaire(salaire){}

Employe::Employe(const Employe &e):nom(e.nom), age(e.age), salaire(e.salaire){}

void Employe::afficherInformation() const{
    cout<<"Le nom: "<<nom<<endl;
    cout<<"L'age: "<<age<<endl;
    cout<<"Le salaire: "<<salaire<<endl;
}