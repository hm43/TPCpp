#include "Technicien.h"
#include<iostream>

using namespace std;

Technicien::Technicien(string nom, int age, double salaire, string domaine):Employe(nom, age, salaire), domaine(domaine){}

Technicien::Technicien(const Technicien &t): Employe(t), domaine(t.domaine){}

void Technicien::afficherInformation() const{
    Employe::afficherInformation();
    cout<<"Le domaine de compétence: " <<domaine<<endl;
}