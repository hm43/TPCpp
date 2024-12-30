
#include <iostream>
#include "Magazine.h"
using namespace std;

Magazine::Magazine(string titre, string auteur, int annee, string freq, int numero_actuel):
RessourceMedia(titre, auteur, annee), freq(freq), numero_actuel(numero_actuel){}


void Magazine::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"Frequence: "<<freq<<endl;
    cout<<"Numero actuel: "<<numero_actuel<<endl<<endl;
}