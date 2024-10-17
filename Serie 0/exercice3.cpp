#include <iostream>
#include<vector>

using namespace std;
int somme(vector<int> tab){
    int s = 0;
    for(int &e: tab){
        s+=e;
    }
    return s;
}
float moyenne(vector<int> tab){
    return (float) somme(tab)/tab.size();
}
void chercherVal (vector<int> tab, int A, int *pos, int *nb_occ){
    *nb_occ = 0;
    *pos = -1;
    for(int i = 0; i< tab.size(); i++){
        if(tab[i] == A){
            if(*pos == -1)
                *pos = i;
            (*nb_occ)++;
        }
    }
}
int main(){
    int taille;
    vector<int> tab;
    do{
        cout<<"Donner la taille entre 1 et 10: ";
        cin>>taille;
        if(taille <= 0 || taille > 10)
            cout<<"La valeur invalide"<<endl;
    }while(taille <= 0 || taille > 10);
    tab.resize(taille);
    for(int i = 0; i<taille; i++){
        cout<<"La valeur "<<i+1<<": ";
        cin>>tab[i];
    }
    cout<<"La somme est: "<<somme(tab)<<endl;
    cout<<"La moyenne est: "<<moyenne(tab)<<endl<<endl;
    int valeur, pos, nbr_occ;
    cout<<"Donner une valeur: ";
    cin>>valeur;
    chercherVal(tab, valeur, &pos, &nbr_occ);
    if(nbr_occ > 0){
        cout<<"La valeur existe dans: "<<pos+1<<", "<<nbr_occ<<" fois."<<endl<<endl;
    }else{
        cout<<"La valeur n'existe pas."<<endl<<endl;
    }


    return 0;
}