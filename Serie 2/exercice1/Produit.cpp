#include "Produit.h"

Produit::Produit(string nom, float prix){
    this->nom = nom;
    this->prix = prix;
    totalSales += prix;
}
Produit::~Produit(){
    totalSales -= prix;
}
float Produit::getTotalSales(){
    return totalSales;
}
void Produit::resetSales(){
    totalSales = 0;
}
float Produit::totalSales = 0;