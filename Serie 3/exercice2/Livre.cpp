#include "Livre.h"
#include <iostream>
using namespace std;

Livre::Livre(string titre, string auteur, int annee, string g, int nbr):
RessourceMedia(titre, auteur, annee), genre(g), nbrPages(nbr){}

void Livre::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"Le genre: "<<genre<<endl;
    cout<<"Nombre de pages: "<<nbrPages<<endl<<endl;
}