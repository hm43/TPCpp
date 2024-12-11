#include "ListeCourses.h"
#include <iostream>
using namespace std;
int main() {
ListeCourses listeCourses(20);

int choix;
int idProduit;

do {
cout << "Menu :" << endl;
cout << "1. Ajouter un produit" << endl;
cout << "2. Supprimer un produit" << endl;
cout << "3. Afficher la liste" << endl;
cout << "4. Calculer le total" << endl;
cout << "5. Quitter" << endl;
cout << "Votre choix : ";
cin >> choix;

switch (choix) {
case 1:
listeCourses.afficherProduitsDisponibles();
cout << "Entrez l'ID du produit à ajouter : ";
cin >> idProduit;
listeCourses.ajouterProduit(idProduit);
break;
case 2:
listeCourses.afficherProduitsDisponibles();
cout << "Entrez l'ID du produit à supprimer : ";
cin >> idProduit;
listeCourses.supprimerProduit(idProduit);
break;
case 3:
listeCourses.afficherListe();
break;
case 4:
cout << "Le coût total est de : " << listeCourses.calculerCoutTotal() << " Dhs" << endl;
break;
case 5:
cout << "Au revoir !" << endl;
break;
default:
cout << "Choix invalide." << endl;
}
} while (choix != 5);

return 0;
}