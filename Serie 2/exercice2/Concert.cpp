#include "Concert.h"
#include <iostream>
int Concert::totalConcerts = 0;

Concert::Concert(string nom, string date, int heure, int duree){
    this->nom = nom;
    this->date = date;
    this->heure = heure;
    this->duree = duree;
    totalConcerts++;
}
Concert::~Concert(){
    totalConcerts--;
}

void Concert::afficherDetails(bool afficherNom, bool afficherDate, bool afficherHeure, bool afficherDuree) const{
    if(afficherNom){
        cout<<"Concert: "<<nom<<endl;
    }
    if(afficherDate){
        cout<<"Date: "<<date<<endl;
    }
    if(afficherHeure){
        cout<<"Heure de debut: "<<heure<<"h"<<endl;
    }
    if(afficherDuree){
        cout<<"Durée: "<<duree<<"minutes"<<endl;
    }
    cout<<endl;
}

int Concert::getTotalConcerts(){
    return totalConcerts;
}

void Concert::resetSales(){
    totalConcerts = 0;
}