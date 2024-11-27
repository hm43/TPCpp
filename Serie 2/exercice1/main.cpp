#include <iostream>
#include "Produit.h"

using namespace std;

int main(){
    Produit p1("Nom", 10.4);
    Produit p2("Nom2", 20);
    cout<<Produit::getTotalSales()<<endl<<endl;
    Produit::resetTotal();

    Produit p3("Nom3", 10);
    cout<<endl<<"APRES:"<<endl;
    cout<<Produit::getTotalSales()<<endl<<endl;

    return 0;
}