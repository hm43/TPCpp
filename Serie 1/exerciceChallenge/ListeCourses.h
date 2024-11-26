#ifndef LISTECOURSES_H
#define LISTECOURSES_H

#include <string>
using namespace std;

struct Produit {
    int id;
    string nom;
    float prix;
};

const extern Produit produitsDisponibles[];
const extern int nbrProduitsDisponibles;

class ListeCourses {
private:
    Produit* produits;
    int nbrProduits;
    float prixTotal;
    int capacite;

public:
    ListeCourses(int);
    ListeCourses(const ListeCourses& autre);
    ~ListeCourses();

    void afficherProduitsDisponibles() const;
    void ajouterProduit(int idProduit);
    void supprimerProduit(int idProduit);
    void afficherListe();
    float calculerCoutTotal();
};

Produit chercherProduit(int idProduit);

#endif