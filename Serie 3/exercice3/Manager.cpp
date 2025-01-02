#include <iostream>
#include "Manager.h"
using namespace std;
Manager::Manager(string nom, int age, double salaire, int nbr):
Employe(nom, age, salaire), nbrEmploye(nbr){}

Manager::Manager(const Manager &m): 
Employe(m), nbrEmploye(m.nbrEmploye){}


void Manager::afficherInformation(){
    Employe::afficherInformation();
    cout<<"Le nombre d'employes: "<<nbrEmploye<<endl;
}