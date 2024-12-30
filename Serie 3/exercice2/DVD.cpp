
#include <iostream>
#include "DVD.h"
using namespace std;

DVD::DVD(string titre, string auteur, int annee, string genre, int duree):
RessourceMedia(titre, auteur, annee), genre(genre), duree(duree){}


void DVD::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"Duree: "<<duree<<endl;
    cout<<"Genre: "<<genre<<endl<<endl;
}