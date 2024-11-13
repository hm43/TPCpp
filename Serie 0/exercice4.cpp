#include<iostream>

using namespace std;

#define N 1 // le nombre des etudiants
#define M 2 // le nombre des notes

struct note{
    float valeur;
    int coeff;
    string module;
};
struct etudiant{
    string nom;
    string matricule;
    note notes[M];
};
float moyenne(etudiant e){
    float s = 0;
    float c = 0;
    for(int i = 0; i< M; i++){
        s += e.notes[i].valeur * e.notes[i].coeff;
        c += e.notes[i].coeff;
    }
    return s / c;
}
int main(){
    etudiant etudiants[N];
    for(int i = 0; i < N; i++){
        cout<<"Donner le nom de l'etudiant "<<i+1<<": ";
        cin>>etudiants[i].nom;
        cout<<"Donner le matricule de l'etudiant "<<i+1<<": ";
        cin>>etudiants[i].matricule;
        for(int j = 0; j < M; j++){
            cout<<"Donner la note "<<j+1 <<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].valeur;
            cout<<"Donner le coefficient de la note "<<j+1 <<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].coeff;
            cout<<"Donner le module de la note "<<j+1 <<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].module;
        }
    }
    for(int i = 0; i< N; i++){
        cout<<"L'etudiant "<<etudiants[i].nom<<" a la moyenne "<<moyenne(etudiants[i])<<endl;
    }
    return 0;
}