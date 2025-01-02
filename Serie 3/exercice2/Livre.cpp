#include "Livre.h"
#include<iostream>
using namespace std;
Livre::Livre(string t, string a, int annee, string g, int nbr):
    RessourceMedia(t, a, annee), genre(g), nbrPages(nbr){}

void Livre::afficherDetails(){
    RessourceMedia::afficherDetails();
    cout<<"Genre: "<<genre<<endl;
    cout<<"Nombre de pages: "<<nbrPages<<endl;
}