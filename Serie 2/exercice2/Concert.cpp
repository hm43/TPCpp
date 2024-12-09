#include "Concert.h"
#include <iostream>
using namespace std;
int Concert::totalconcerts = 0;

Concert::Concert(string nom, string date, int heure, int duree): nom(nom), date(date), heure(heure), duree(duree){
    totalconcerts++;
}

void Concert::afficherDetails(bool afficherNom, bool afficherDate, bool afficherHeure, bool afficherDuree){
    if(afficherNom==true){
        cout<<"Le nom du concert est: "<<nom<<endl;
    }
    if(afficherDate==true){
        cout<<"La date du concert est: "<<date<<endl;
    }
    if(afficherHeure==true){
        cout<<"L'heure du concert est: "<<heure<<endl;
    }
    if(afficherDuree==true){
        cout<<"La duree du concert est: "<<duree<<endl;
    }
}

int Concert::getTotalConcerts(){
    return totalconcerts;
}