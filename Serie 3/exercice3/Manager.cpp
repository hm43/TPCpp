#include "Manager.h"
#include<iostream>

using namespace std;

Manager::Manager(string nom, int age, double salaire, int nbrEmp): Employe(nom,age, salaire), nbrEmp(nbrEmp){}

Manager::Manager(const Manager &m): Employe(m), nbrEmp(m.nbrEmp){}

void Manager::afficherInformation() const{
    Employe::afficherInformation();
    cout<<"Le nombre d'employees: "<<nbrEmp<<endl;
}
