#include<iostream>
#include<string>

using namespace std;
class Voiture{
    string marque, modele, couleur;
    int annee, vitesse_maximale, vitesse_actuelle;
    public:
        Voiture(): marque(""), modele(""), couleur("Blanc"), annee(2000), vitesse_maximale(100), vitesse_actuelle(0){}
        Voiture(string m, string modele, int annee, string couleur, int vitesse_maximale){
            marque = m;
            this->modele = modele;
            this->annee = annee;
            this->couleur = couleur;
            this->vitesse_maximale = vitesse_maximale;
        }
        void accelerer(int kmh){
            vitesse_actuelle += kmh;
            if(vitesse_actuelle > vitesse_maximale){
                vitesse_actuelle = vitesse_maximale;
            }
        }
        void freiner(int kmh){
            vitesse_actuelle -= kmh;
            if(vitesse_actuelle < 0){
                vitesse_actuelle = 0;
            }
        }
        void afficherInfos(){
            cout<<"La marque: "<<marque<<endl;
            cout<<"Vitesse actuelle: "<<vitesse_actuelle<<endl;
        }
        float calculerDistanceParcourue(int temps){
            return (temps / 3600) * vitesse_actuelle;
        }
};
int main(){
    Voiture maVoiture("Toyota", "Corolla", 2023, "Bleu", 200);
    maVoiture.accelerer(250);
    maVoiture.freiner(50);
    maVoiture.afficherInfos();
    cout<<"La distance: "<<maVoiture.calculerDistanceParcourue(7200)<<" km dans " <<7200/3600<<" H"<<endl;
    return 0;
}