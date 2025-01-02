#include <iostream>
#include "RessourceMedia.h"
using namespace std;

RessourceMedia::RessourceMedia(string titre, string auteur, int annee):
titre(titre), auteur(auteur), annee(annee){}

void RessourceMedia::afficherDetails() const{
    cout<<"Titre: "<<titre<<endl;
    cout<<"Auteur: "<<auteur<<endl;
    cout<<"Annee de publication: "<<annee<<endl;
}