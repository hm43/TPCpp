#include<iostream>

using namespace std;

#define N 3 // total des etudiants
#define M 3 // total des notes


struct note{
    float valeur;
    int coeff;
    string matiere;
};
typedef struct note note;

struct etudiant{
    string nom;
    string matricule;
    note notes[M];
};
typedef struct etudiant etudiant;

float moyenne(etudiant etd){
    float s = 0;
    int c = 0;
    for(int i = 0; i < M; i++){
        s+=etd.notes[i].valeur*etd.notes[i].coeff;
        c += etd.notes[i].coeff;
    }
    return s/c;
}

int main(){
    etudiant e[N];
    for(int i =0; i< N; i++){
        cout<<"Donner le nom de l'etudiant "<<i+1<<": ";
        cin>>e[i].nom;
        cout<<"Donner le matricule de l'etudiant "<<i+1<<": ";
        cin>>e[i].matricule;

        cout<<"Donner les notes de l'etudiant "<<i+1<<": "<<endl;
        for(int j = 0; j<M ; j++){
            cout<<"Donner la valeur de la note "<<j+1<<": ";
            cin>>e[i].notes[j].valeur;
            cout<<"Donner le coefficiant de la note "<<j+1<<": ";
            cin>>e[i].notes[j].coeff;
            cout<<"Donner la matiere de la note "<<j+1<<": ";
            cin>>e[i].notes[j].matiere;

        }
        for(int i = 0; i<N; i++){
            cout<<"L'etudiant "<<e[i].nom<<" de matricule: "<<e[i].matricule<<" a eu la moyenne: "<<
            moyenne(e[i])<<endl;
        }

    }

    return 0;
}