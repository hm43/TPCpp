#include <iostream>
#include "Livre.h"

using namespace std;
Livre::Livre(string titre, string auteur, int annee, string genre, int nbrPages):
RessourceMedia(titre,auteur, annee),genre(genre), nbrPages(nbrPages){}

void Livre::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"Genre: "<<genre<<endl;
    cout<<"Nombre de pages: "<<nbrPages<<endl<<endl;
}