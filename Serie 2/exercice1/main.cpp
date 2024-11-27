#include<iostream>
#include "Produit.h"

using namespace std;

int main(){
    Produit p1("Nom1", 10.2);
    Produit p2("Nom2", 20);
    cout<<Produit::getTotalSales()<<endl;
    Produit::resetSales();
    Produit p13("Nom1", 1.2);
    Produit p12("Nom2", 20);
    cout<<Produit::getTotalSales()<<endl;


    return 0;
}