#include "Manager.h"
#include <iostream>
using namespace std;

Manager::Manager(string nom, int age, double salaire, int nbremp): 
Employe(nom, age, salaire),nbrEmp(nbremp){}

Manager::Manager(const Manager &m):Employe(m),nbrEmp(m.nbrEmp) {}


void Manager::afficherInformation() const {
    Employe::afficherInformation();
    cout<<"Le nombre d'employes: "<<nbrEmp<<endl;
}