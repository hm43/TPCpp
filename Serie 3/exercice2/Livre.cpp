#include "Livre.h"
#include <iostream>
#include <string>
using namespace std;

Livre::Livre(string titre, string auteur, int annee, string genre, int nbrPages): RessourceMedia(titre, auteur, annee){
    this->genre = genre;
    this->nbrPages = nbrPages;
}

void Livre::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"Le genre: "<<genre<<endl;
    cout<<"Le nombre de pages: "<<nbrPages<<endl<<endl;
}