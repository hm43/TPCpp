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

Concert Concert::operator+(const Concert &c){
    return Concert(nom, date, heure, duree+c.duree);
}
Concert& Concert::operator-(int v){
    this->duree -= v;
    if(this->duree < 0){
        this->duree = 0;
    }
    return *this;
}
bool Concert::operator==(const Concert &c){
    return nom == c.nom && date == c.date && heure == c.heure;
}

bool Concert::operator<(const Concert &c){
    return duree < c.duree;
}
bool Concert::operator>(const Concert &c){
    return duree > c.duree;
}

ostream& operator<<( ostream &out, const Concert &c){
    out<<"Le nom du concert est: "<<c.nom<<endl;
    out<<"La date du concert est: "<<c.date<<endl;
    out<<"L'heure du concert est: "<<c.heure<<"h"<<endl;
    out<<"La duree du concert est: "<<c.duree<<" minutes"<<endl;
    return out;
}

istream& operator>>( istream & in,  Concert &c){
    cout<<"Entrer le nom: ";
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