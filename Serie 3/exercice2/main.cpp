#include <iostream>
#include <vector>
#include <string>
#include "Livre.h"
#include "Magazine.h"
#include "DVD.h"
using namespace std;

int main() {
    // Création des instances de ressources médiatiques avec des données fictives
    Livre livre1("Les Misérables", "Victor Hugo", 1862, "Roman", 1463);
    Magazine magazine1("National Geographic", "Various", 2021, "Mensuel", 132);
    DVD dvd1("Inception", "Christopher Nolan", 2010, "Film", 148);
    // Stockage des ressources dans un vecteur de pointeurs vers RessourceMedia
    vector<RessourceMedia*> medias = {&livre1, &magazine1, &dvd1};
    // Affichage des détails de chaque ressource média
    for (auto media : medias) {
        media->afficherDetails();
    }
    return 0;
}
