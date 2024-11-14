#include<iostream>
#include<string>

using namespace std;

class Voiture {
    private:
        string marque;
        string modele; 
        int annee;
        string couleur;
        int vitesse_maximale;
        int vitesse_actuelle;
    public:
        Voiture(){
            marque = "";
            modele = ""; 
            annee = 2000;
            couleur = "";
            vitesse_maximale = 140;
            vitesse_actuelle = 0;
        }
        Voiture(string m, string modele, int a, string c, int vm): 
        marque(m), modele(modele), annee(a), couleur(c), vitesse_maximale(vm), vitesse_actuelle(0){}
        void accelerer(int kmh){
            vitesse_actuelle +=kmh;
            if(vitesse_actuelle > vitesse_maximale){
                vitesse_actuelle = vitesse_maximale;
            }
        }
        void freiner(int kmh){
            vitesse_actuelle -=kmh;
            if(vitesse_actuelle < 0){
                vitesse_actuelle = 0;
            }
        }
        void afficherInfos() {
            cout<<"La marque de voiture: "<<marque<<endl;
            cout<<"Sa vitesse actuelle: "<<vitesse_actuelle<<endl;
        }
        float calculerDistanceParcourue(int temps){
            return vitesse_actuelle * (temps / 3600);
        }
};
int main(){
    Voiture maVoiture("Toyota", "Corolla", 2023, "Bleu", 200);
    maVoiture.accelerer(50);
    maVoiture.afficherInfos();
    cout<<"Distance Parcourus en 2h est: "<<maVoiture.calculerDistanceParcourue(7200)<<" km."<<endl;
    return 0;
}