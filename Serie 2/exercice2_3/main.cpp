#include <iostream>
#include <string>
#include "Concert.h"

using namespace std;

int main(){
    // Saisie des informations des concerts
    Concert concert1, concert2;
    cout << "Entrez les details du Concert 1 (nom date heureDebut duree) : "<<endl;
    cin >> concert1;
    cout << "Entrez les details du Concert 2 (nom date heureDebut duree) : "<<endl;
    cin >> concert2;
    // Affichage des concerts
    cout << endl << "Concert 1 :"<<endl << concert1;
    cout << endl << "Concert 2 :"<<endl << concert2;
    // Surcharge de l'opérateur +
    Concert concertCombine = concert1 + concert2;
    cout <<endl << "Concert combiné (Concert 1 + Concert 2) :"<<endl  << concertCombine;
    // Surcharge de l'opérateur -
    concert1 = concert1 - 30;
    cout <<endl << "Concert 1 après réduction de 30 minutes :"<<endl  << concert1;
    // Comparaison avec ==
    if (concert1 == concert2) {
        cout <<endl << "Concert 1 et Concert 2 sont identiques."<<endl ;
    } else {
        cout <<endl << "Concert 1 et Concert 2 sont différents."<<endl ;
    }
    // Comparaison avec < et >
    if (concert1 < concert2) {
        cout<<endl<< "Concert 1 est plus court que Concert 2."<<endl;
    } else if (concert1 > concert2) {
        cout <<endl<< "Concert 1 est plus long que Concert 2."<<endl;
    } else {
        cout <<endl<< "Concert 1 et Concert 2 ont la même durée."<<endl;
    }

    return 0;
}