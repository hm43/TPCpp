#include<iostream>

using namespace std;

class Voiture{
    private:
        string marque, modele, couleur;
        int annee, vitesse_maximale, vitesse_actuelle;
    public:
        Voiture();
        Voiture(string, string, int, string, int);
        void accelerer(int);
        void freiner(int);
        void afficherInfos();
        float calculerDistanceParcourue(int);
};

Voiture::Voiture(): marque(""), modele(""), annee(2000), couleur("Blanc"), 
vitesse_maximale(160), vitesse_actuelle(0){}

Voiture::Voiture(string marque, string modele, int a , string c, int vm): marque(marque),
modele(modele), annee(a), couleur(c), vitesse_maximale(vm), vitesse_actuelle(0) {}

void Voiture::accelerer(int kmh){
    vitesse_actuelle += kmh;
    if(vitesse_actuelle > vitesse_maximale){
        vitesse_actuelle = vitesse_maximale;
    }
}

void Voiture::freiner(int kmh){
    vitesse_actuelle -= kmh;

    if(vitesse_actuelle < 0){
        vitesse_actuelle = 0;
    }
}
void Voiture::afficherInfos(){
    cout<<"La marque: "<<marque<<endl;
    cout<<"Vitesse actuelle: "<<vitesse_actuelle<<endl;
}
float Voiture::calculerDistanceParcourue(int temps){
    return vitesse_actuelle * (float)(temps/3600);
}
int main(){
    Voiture maVoiture("Toyota", "Corolla", 2023, "Bleur", 200);
    maVoiture.accelerer(50);
    maVoiture.freiner(60);
    maVoiture.accelerer(250);
    maVoiture.afficherInfos();
    cout<<"La distance parcourue en 2h "<<maVoiture.calculerDistanceParcourue(7200)<<" km."<<endl;
    return 0;
}