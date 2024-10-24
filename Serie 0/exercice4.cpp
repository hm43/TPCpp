#include<iostream>
#include<string>

using namespace std;

#define N 3 // nombre d'etudiants
#define M 3 // nombre des notes

typedef struct {
    double valeur;
    int coefficient;
    string module;
}note;

typedef struct{
    string nom;
    string matricule;
    note notes[M];
}etudiant;
float moyenne(etudiant e){
    float s= 0;
    float sc = 0;
    for(int i =0; i<M; i++){
        s+=e.notes[i].valeur * e.notes[i].coefficient;
        sc += e.notes[i].coefficient;
    }
    return s/sc;
}
int main(){
    etudiant e[N];
    for(int i = 0; i< N; i++){
        cout<<"Donner le nom de l'etudiant "<<i+1<<": ";
        getline(cin, e[i].nom);
        cout<<"Donner le matricule de l'etudiant "<<i+1<<": ";
        getline(cin, e[i].matricule);
            cin.clear();
        cout<<"La saisie des notes: "<<endl;
        for(int j = 0; j < M; j++){
            cout<<"Donner la valeur de la note "<<j+1<<": ";
            cin>>e[i].notes[j].valeur;
            cout<<"Donner le coefficiant de la note "<<j+1<<": ";
            cin>>e[i].notes[j].coefficient;
            cout<<"Donner le module de la note "<<j+1<<": ";
            //cin>>e[i].notes[j].module;
            getchar();
            getline(cin, e[i].notes[j].module);
        }

    }

    for(int i = 0; i< N; i++){
        cout<<"La moyenne de l'etudiant "<<e[i].nom<<" De matricule "<<e[i].matricule<<" est: "<<moyenne(e[i])<<endl;
    }

    return 0;
}