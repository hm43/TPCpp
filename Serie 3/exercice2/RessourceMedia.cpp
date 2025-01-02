#include "RessourceMedia.h"
#include <iostream>
using namespace std;
RessourceMedia::RessourceMedia(string t, string a, int annee):
titre(t), auteur(a), annee(annee){}
void RessourceMedia::afficherDetails(){
    cout<<"Le titre: "<<titre<<endl;
    cout<<"L'auteur: "<<auteur<<endl;
    cout<<"L'annee de publication: "<<annee<<endl;
}