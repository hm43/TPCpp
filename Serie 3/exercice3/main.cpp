#include <iostream>
#include <string>
#include "Manager.h"
using namespace std;

int main() {
    // Création des instances d'employés
    Manager manager("Alice", 42, 80000, 5);
    // Technicien technicien("Bob", 35, 55000, "Informatique");
    // Directeur directeur("Charlie", 50, 120000, "Expansion Globale");
    // Affichage des informations des employés
    manager.afficherInformation();
    // technicien.afficherInformation();
    // directeur.afficherInformation();
    return 0;
}
