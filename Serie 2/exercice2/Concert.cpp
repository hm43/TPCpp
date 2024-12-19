#include "Concert.h"
#include <iostream>

using namespace std;
int Concert::totalConcerts = 0;

Concert::Concert(string nom, string date, int heure, int duree):
nom(nom), date(date), heure(heure), duree(duree){
    totalConcerts++;
}
Concert::~Concert(){
    totalConcerts--;
}
void Concert::afficherDetails(bool afficherNom, bool afficherDate, bool afficherHeure, bool afficherDuree){
    if(afficherNom){
        cout<<"Concert: "<<nom<<endl;
    }
    if(afficherDate){
        cout<<"Date: "<<date<<endl;
    }
    if(afficherHeure){
        cout<<"heure: "<<heure<<"h"<<endl;
    }
    if(afficherDuree){
        cout<<"Duree: "<<duree<<" minutes"<<endl;
    }
}
int Concert::getTotalConcerts(){
    return totalConcerts;
}
void Concert::resetSales(){
    totalConcerts = 0;
}