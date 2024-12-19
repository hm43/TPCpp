#include <iostream>
#include <string>
#include "Concert.h"

using namespace std;
int main() {
    // Saisie des informations des concerts
    Concert concert1, concert2;
    std::cout << "Entrez les details du Concert 1 (nom date heureDebut duree) : ";
    std::cin >> concert1;
    std::cout << "Entrez les details du Concert 2 (nom date heureDebut duree) : ";
    std::cin >> concert2;
    // Affichage des concerts
    std::cout << "\nConcert 1 :\n" << concert1;
    std::cout << "\nConcert 2 :\n" << concert2;
    // Surcharge de l'opérateur +
    Concert concertCombine = concert1 + concert2;
    std::cout << "\nConcert combiné (Concert 1 + Concert 2) :\n" << concertCombine;
    // Surcharge de l'opérateur -
    concert1 = concert1 - 30;
    std::cout << "\nConcert 1 après réduction de 30 minutes :\n" << concert1;
    // Comparaison avec ==
    if (concert1 == concert2) {
        std::cout << "\nConcert 1 et Concert 2 sont identiques.\n";
    } else {
        std::cout << "\nConcert 1 et Concert 2 sont différents.\n";
    }
    // Comparaison avec < et >
    if (concert1 < concert2) {
        std::cout << "Concert 1 est plus court que Concert 2.\n";
    } else if (concert1 > concert2) {
        std::cout << "Concert 1 est plus long que Concert 2.\n";
    } else {
        std::cout << "Concert 1 et Concert 2 ont la même durée.\n";
    }
    return 0;
}
