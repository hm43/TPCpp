#include "ListeCourses.h"
#include <iostream>
using namespace std;

const Produit produitsDisponibles[] = {
    {1, "Pommes", 1.5},
    {2, "Bananes", 0.8},
    {3, "Pain", 2.2},
    {4, "Lait", 1.0}
};
const int nbrProduitsDisponibles = 4;

Produit chercherProduit(int idProduit) {
    for (int i = 0; i < nbrProduitsDisponibles; i++) {
        if (produitsDisponibles[i].id == idProduit) {
            return produitsDisponibles[i];
        }
    }
    return {0, "", 0};
}

ListeCourses::ListeCourses(int capacite) : capacite(capacite) {
    nbrProduits = 0;
    prixTotal = 0;
    produits = new Produit[capacite];
}

ListeCourses::ListeCourses(const ListeCourses& autre) {
    capacite = autre.capacite;
    nbrProduits = autre.nbrProduits;
    prixTotal = autre.prixTotal;

    produits = new Produit[capacite];
    for (int i = 0; i < nbrProduits; ++i) {
        produits[i] = autre.produits[i];
    }
}

ListeCourses::~ListeCourses() {
    delete[] produits;
}

void ListeCourses::afficherProduitsDisponibles() const {
    cout << "Produits disponibles :" << endl;
    cout << "ID : Nom - PRIX" << endl;
    for (const Produit& produit : produitsDisponibles) {
        cout << produit.id << ": " << produit.nom << " - " << produit.prix << " Dhs" << endl;
    }
}

void ListeCourses::ajouterProduit(int idProduit) {
    if (nbrProduits < capacite) {
        Produit nouveau = chercherProduit(idProduit);
        if (nouveau.id != 0) {
            produits[nbrProduits++] = nouveau;
        } else {
            cout << "Produit introuvable." << endl;
        }
    } else {
        cout << "Panier pleine." << endl;
    }
}

void ListeCourses::supprimerProduit(int idProduit) {
    int indice = -1;
    for (int i = 0; i < nbrProduits; ++i) {
        if (produits[i].id == idProduit) {
            indice = i;
            break;
        }
    }

    if (indice != -1) {
        for (int i = indice; i < nbrProduits - 1; ++i) {
            produits[i] = produits[i + 1];
        }
        nbrProduits--;
    } else {
        cout << "Produit introuvable." << endl;
    }
}

void ListeCourses::afficherListe() {
    if (nbrProduits == 0) {
        cout << "Panier vide" << endl;
        return;
    }
    cout << "Liste de courses :" << endl;
    for (int i = 0; i < nbrProduits; ++i) {
        cout << "- " << produits[i].nom << " prix unitaire: " << produits[i].prix << " Dhs" << endl;
    }
}

float ListeCourses::calculerCoutTotal() {
    float coutTotal = 0.0;
    for (int i = 0; i < nbrProduits; ++i) {
        coutTotal += produits[i].prix;
    }
    return coutTotal;
}