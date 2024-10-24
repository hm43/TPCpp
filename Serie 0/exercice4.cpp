#include<iostream>
#include<string>

using namespace std;

#define N 3 // nombre des etudiants
#define M 3 // nombre des notes
struct note{
    float valeur;
    int coefficient;
    string module;
};
struct etudiant{
    string nom;
    string matricule;
    note notes[M];
};

float moyenne(etudiant etd){
    float s = 0;
    float sc = 0;
    for(int i =0; i< M; i++){
        s+=etd.notes[i].valeur * etd.notes[i].coefficient;
        sc += etd.notes[i].coefficient;
    }
    return s/sc;
}

int main(){
    etudiant e[N];
    for(int i = 0; i < N; i++){
        cout<<"Donner le nom de l'etudiant "<<i+1<<": ";
        getline(cin, e[i].nom);
        cout<<"Donner le matricule de l'etudiant "<<i+1<<": ";
        getline(cin, e[i].matricule);
        for(int j = 0; j < M; j++){
            cout<<"Donner la valeur de note "<<j+1<<" : ";
            cin>>e[i].notes[j].valeur;
            cout<<"Donner le coefficient de note "<<j+1<<" : ";
            cin>>e[i].notes[j].coefficient;
            cout<<"Donner le module de note "<<j+1<<" : ";
            getchar();
            getline(cin, e[i].notes[j].module);
        }
    }


    for(int i = 0; i< M; i++){
        cout<<"La moyenne de l'etudiant "<<e[i].nom<<" de matricule "<<e[i].matricule<<" est : "<<moyenne(e[i])<<endl;
    }


    return 0;
}