#include "Magazine.h"
#include <iostream>
using namespace std;

Magazine::Magazine(string titre, string a, int annee, string freq, int numero):
RessourceMedia(titre, a, annee){
    frequence = freq;
    numero_actuel = numero;
}

void Magazine::afficherDetails() const{
    RessourceMedia::afficherDetails();
    cout<<"La frequence: "<<frequence<<endl;
    cout<<"Le numero actuel: "<<numero_actuel<<endl<<endl;
}