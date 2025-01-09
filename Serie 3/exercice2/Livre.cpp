#include "Livre.h"
#include<iostream>

using namespace std;

Livre::Livre(string titre, string auteur, int annee, string genre, int nbrPage):
RessourceMedia(titre, auteur, annee), genre(genre), nbrPages(nbrPage){}
void Livre::afficherDetails() const {
    RessourceMedia::afficherDetails();
    cout<<"Le genre: "<<genre<<endl;
    cout<<"Le nombre de pages: "<<nbrPages<<endl;
}