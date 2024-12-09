#include "Concert.h"

int Concert::totalConcerts = 0;

Concert::Concert(string nom, string date, int heure, int duree):
    nom(nom), date(date), heure(heure), duree(duree){
        totalConcerts++;
    }
void Concert::afficherDetails(bool afficherNom, bool afficherDate, bool afficherHeure, bool afficherDuree){
    if(afficherNom){
        cout<<"Concert: "<<nom<<endl;
    }
    if(afficherDate){
        cout<<"Date: "<<date<<endl;
    }
    if(afficherHeure){
        cout<<"Heure de debut: "<<heure<<"h"<<endl;
    }
    if(afficherDate){
        cout<<"Durée: "<<duree<<" minutes"<<endl;
    }
}

int Concert::getTotalConcerts(){
    return totalConcerts;
}

void Concert::resetSales(){
    totalConcerts = 0;
}