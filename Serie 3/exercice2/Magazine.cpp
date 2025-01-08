#include "Magazine.h"
#include <iostream>
#include <string>
using namespace std;

Magazine::Magazine(string titre, string auteur, int annee, string freq, int numero): RessourceMedia(titre, auteur, annee){
    this->frequence = freq;
    this->numero_actuel = numero;
}

void Magazine::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"La frequence: "<<frequence<<endl;
    cout<<"Le numero actuel: "<<numero_actuel<<endl<<endl;
}