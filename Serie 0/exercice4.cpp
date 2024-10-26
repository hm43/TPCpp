#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

#define N 3
#define M 3
typedef struct {
    float valeur;
    int coeff;
    string matiere;
}note;
typedef struct {
    string nom;
    string matricule;
    note notes[M];
}etudiant;

float moyenne(etudiant etud){
    float total = 0;
    int totalC = 0; 
    for(int i = 0; i< M; i++){
        total += etud.notes[i].valeur * etud.notes[i].coeff;
        totalC += etud.notes[i].coeff;
    }
    return total/totalC;

}

int main(){
    etudiant  e[N];
    for(int i=0; i< N; i++){
        cout<<"Donner le nom de l'etudiant "<<i+1<<": ";
        cin>>e[i].nom;
        cout<<"Donner le matricule de l'etudiant "<<i+1<<": ";
        cin>>e[i].matricule;
        cout<<"Donner les notes de l'etudiant "<<i+1<<": ";
        for(int j = 0 ; j<M ; j++){
            do{cout<<"Donner La valeur de note (entre 0 et 20) "<<j+1<<": ";
            cin>>e[i].notes[j].valeur;
            }while(e[i].notes[j].valeur < 0 || e[i].notes[j].valeur > 20);
            cout<<"Donner La matiere de note "<<j+1<<": ";
            cin>>e[i].notes[j].matiere;
            cout<<"Donner Le coefficient de note "<<j+1<<": ";
            cin>>e[i].notes[j].coeff;
        }
    }
    for(int i = 0; i< N ; i++){
        cout<<e[i].nom<<" a une la moyenne: "<<moyenne(e[i])<<endl<<endl;
    }
    
    return 0;
}