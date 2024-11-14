#include<iostream>
#include<string>

using namespace std;
class Voiture{
    string marque, modele, couleur ;
    int annee, vitesse_max, vitesse_act;
    public:
        Voiture();
        Voiture(string, string, int, string, int);
        void accelerer(int);
        void freiner(int);
        void afficherInfos();
        float calculerDistanceParcourue(int);
};

Voiture::Voiture(): marque(""), modele(""), annee(2000), vitesse_max(200), couleur("Bleu"), vitesse_act(0)
{}
Voiture::Voiture(string marque, string modele, int annee, string couleur, int vitesse_max):
 marque(marque), modele(modele), annee(annee), vitesse_max(vitesse_max), couleur(couleur), vitesse_act(0)
{}
void Voiture::accelerer(int kmh){
    if(kmh < 0) {
        cout<<"Vitesse doit etre positif."<<endl;
    }else{
        vitesse_act += kmh;
        if(vitesse_act > vitesse_max){
            vitesse_act = vitesse_max;
        }
    }
    

}
void Voiture::afficherInfos(){
    cout<<"La voiture de marque: "<<marque<<endl;
    cout<<"La vitesse actuelle: "<<vitesse_act<<endl;
}
void Voiture::freiner(int kmh){
    vitesse_act -= kmh;
    if(vitesse_act < 0){
        vitesse_act = 0;
    }
}
float Voiture::calculerDistanceParcourue(int temps){
    return vitesse_act * (temps / 3600);
}
int main(){
    Voiture maVoiture("Toyota", "Corolla", 2023, "Blanc", 200);
    maVoiture.accelerer(50);
    maVoiture.afficherInfos();
    cout<<"La distance parcourus dans 2H "<<maVoiture.calculerDistanceParcourue(7200)<<" km."<<endl;
}