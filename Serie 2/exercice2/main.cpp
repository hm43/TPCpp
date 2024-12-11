#include <iostream>
#include "Concert.h"

using namespace std;

int main(){
    Concert c1("Concert A", "15/12/2024", 20, 90);
    Concert c2("Concert B", "15/12/2024", 20, 90);
    Concert c3("Concert C", "15/12/2024", 20, 90);
    cout<<"Détails complet du Concert 1:"<<endl;
    c1.afficherDetails(); 
    cout<<"Détails sans afficher la date du Concert 2:"<<endl;
    c2.afficherDetails(true, false, true, false);
    cout<<"Détails uniquement de la durée du Concert 3:"<<endl;
    c3.afficherDetails(false, false, false);
    cout<<"Nombre total de concerts : "<<Concert::getTotalConcerts()<<endl<<endl;
    Concert::resetSales();
    cout<<"Nombre total de concerts apres reset: "<<Concert::getTotalConcerts()<<endl<<endl;
}