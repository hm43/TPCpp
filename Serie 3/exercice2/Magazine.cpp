#include <iostream>
#include "Magazine.h"

using namespace std;

Magazine::Magazine(string titre, string auteur, int annee, string freq, int numero_actuel):
RessourceMedia(titre, auteur, annee), freq(freq), numero_actuel(numero_actuel)
{}
void Magazine::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"La frequence: "<<freq<<endl;
    cout<<"Le numero actuel: "<<numero_actuel<<endl;
}