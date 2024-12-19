#include "Produit.h"

float Produit::totalSales = 0;
Produit::Produit(string nom, float prix):nom(nom), prix(prix){
    totalSales+=prix;
}
Produit::~Produit(){
   totalSales-=prix; 
}
float Produit::getTotalSales(){
    return totalSales;
}
void Produit::resetSales(){
    totalSales = 0;
}