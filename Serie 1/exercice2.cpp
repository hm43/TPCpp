#include<iostream>
#include<string>

using namespace std;

class Voiture{
    private:
        string marque,  modele, couleur;
        int annee, vitesse_maximale, vitesse_actuelle;
    public:
        Voiture();
        Voiture(string, string, int, string, int);
        void accelerer(int);
        void freiner(int);
        void afficherInfos();
        int calculerDistanceParcourue(int);
};
Voiture::Voiture(): marque(""), modele(""), annee(2020), couleur("blanc"), 
vitesse_maximale(160), vitesse_actuelle(0){}

Voiture::Voiture(string marque, string modele, int annee, string couleur, int vm): marque(marque), modele(modele), annee(annee), couleur(couleur), 
vitesse_maximale(vm), vitesse_actuelle(0){}

void Voiture::accelerer(int kmh){
    vitesse_actuelle += kmh;
    if(vitesse_actuelle > vitesse_maximale){
        vitesse_actuelle = vitesse_maximale;
    }
}
void Voiture::freiner(int kmh){
    vitesse_actuelle -= kmh;
    if(vitesse_actuelle <0){
        vitesse_actuelle = 0;
    }
}
void Voiture::afficherInfos() {
    cout<<"la marque: "<<marque<<endl;
    cout<<"Vitesse actuelle: "<<vitesse_actuelle<<endl;
}
int Voiture::calculerDistanceParcourue(int temps){
    return vitesse_actuelle * (temps/3600);
}
int main(){
    Voiture maV("Toyota", "Corolla", 2023, "Blanc", 200);
    maV.accelerer(50);
    maV.afficherInfos();
    maV.accelerer(250);
    maV.afficherInfos();

    maV.freiner(50);
    maV.afficherInfos();
    cout<<"La distance parcourue en 2h "<<maV.calculerDistanceParcourue(7200)<<endl;
    return 0;
}