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
Concert Concert::operator+(Concert & c){
    return Concert(nom, date, heure, duree + c.duree);
}
Concert& Concert::operator-(int v){
    duree -= v;
    if(duree < 0){
        duree = 0;
    }
    return (*this);
}
bool Concert::operator==(Concert &c){
    return nom == c.nom && date == c.date && heure == c.heure;
}
bool Concert::operator<(Concert & c){
    return duree < c.duree;
}
bool Concert::operator>(Concert & c){
    return duree > c.duree;
}

ostream& operator<<(ostream & out, const Concert & c){
    out<<"Concert: "<<c.nom<<endl;
    out<<"Date: "<<c.date<<endl;
    out<<"heure: "<<c.heure<<"h"<<endl;
    out<<"Duree: "<<c.duree<<" minutes"<<endl<<endl;
    return out;
}
istream& operator>>(istream & in, Concert & c){
    cout<<endl<<"Entrer le nom: ";
    getline(in, c.nom);
    cout<<"Entrer la date: ";
    getline(in, c.date);
    cout<<"Entrer l'heure: ";
    in>>c.heure;
    cout<<"Entrer la duree (minutes): ";
    in>>c.duree;
    cin.ignore();
    return in;
}