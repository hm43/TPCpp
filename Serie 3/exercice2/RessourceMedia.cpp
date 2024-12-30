#include <iostream>
#include "RessourceMedia.h"

using namespace std;

RessourceMedia::RessourceMedia(string titre, string auteur, int annee): 
titre(titre), auteur(auteur), anneePublication(annee){}

void RessourceMedia::afficherDetails(){
    cout<<"Titre: "<<titre<<endl;
    cout<<"Auteur: "<<auteur<<endl;
    cout<<"annee de publication: "<<anneePublication<<endl;
}