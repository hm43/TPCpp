#include <iostream>
#include <string>
#include "Produit.h"

using namespace std;

int main(){
    // Création de plusieurs produits
    Produit p1("Produit A", 10.0);
    std::cout << "Ventes totales après p1: " << Produit::getTotalSales() << std::endl;
    Produit p2("Produit B", 20.0);
    std::cout << "Ventes totales après p2: " << Produit::getTotalSales() << std::endl;
    Produit p3("Produit C", 30.0);
    std::cout << "Ventes totales après p3: " << Produit::getTotalSales() << std::endl;
    // Réinitialisation des ventes
    Produit::resetSales();
    std::cout << "Ventes totales après réinitialisation: " << Produit::getTotalSales() << std::endl;
    return 0;

}