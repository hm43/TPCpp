#include<iostream>

using namespace std;

#define N 3 // nombre des etudiants
#define M 3 // nombre des notes

struct note{
  string module;
  int coefficient;
  float valeurs;
};

struct etudiant{
    string nom;
    string matricule;
    note notes[M];
};

float moyenne(etudiant e){
    float s = 0;
    int c = 0;
    for(int i = 0; i < M; i++){
        s += (e.notes[i].valeurs * e.notes[i].coefficient);
        c += e.notes[i].coefficient;
    }
    return s/c;
}

int main(){
    etudiant etudiants[N];
    for(int i = 0; i< N; i++){
        cout<<"Donner le nom de "<<i+1<<": ";
        cin>>etudiants[i].nom;
        cout<<"Donner le matricule de "<<i+1<<": ";
        cin>>etudiants[i].matricule;
        for(int j = 0; j < M ; j++){
            cout<<"Donner la note "<<j+1<<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].valeurs;
            cout<<"Donner le coefficient de la note "<<j+1<<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].coefficient;
            cout<<"Donner le module de la note "<<j+1<<" de l'etudiant "<<i+1<<": ";
            cin>>etudiants[i].notes[j].module;
        }
    }

    for(int i = 0; i < N; i++){
        cout<<"Le nom: "<<etudiants[i].nom<<" a la moyenne :"<<moyenne(etudiants[i])<<endl;
    }


    return 0;
}