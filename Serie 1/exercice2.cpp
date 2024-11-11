#include<iostream>
#include<string>

using namespace std;
class Voiture{
     string marque, modele,couleur;
     int  annee, vitesse_maximale, vitesse_actuelle;
     public:
        Voiture(){
            marque = "";
            modele = "";
            annee = 2000;
            couleur = "Blanc";
            vitesse_maximale = 60;
            vitesse_actuelle = 0;
        }
        Voiture(string marque, string modele,int annee, string couleur, int vitesse_maximale): marque(marque), modele(modele), annee(annee), couleur(couleur), vitesse_maximale(vitesse_maximale), vitesse_actuelle(0){}
        void accelerer(int kmh) {
            vitesse_actuelle +=  kmh;
            if(vitesse_actuelle > vitesse_maximale){
                vitesse_actuelle = vitesse_maximale;
            }
        }
        void freiner(int kmh){
            vitesse_actuelle -=  kmh;
            if(vitesse_actuelle < 0){
                vitesse_actuelle = 0;
            }
        }
        void afficherInfos(){
            cout<<"La marque "<<marque<<endl;
            cout<<"La vitesse actuelle: "<<vitesse_actuelle<<endl;
        }
        double calculerDistanceParcourue(int temps){
            return vitesse_actuelle * (temps/3600);
        }
};
int main(){
    Voiture v1("Toyota", "Corolla", 2023, "Bleu",200);
    v1.accelerer(40);
    v1.afficherInfos();
    cout<<"La distance "<<v1.calculerDistanceParcourue(7200)<<" km" <<endl;
    return 0;
}