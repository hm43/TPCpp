#include<iostream>
using namespace std;

int somme(int *tab, int taille){
    int s = 0;
    for(int i = 0; i<taille; i++){
        s+=tab[i];
    }
    return s;
}
float moyenne(int *tab, int taille){
    float m = (float)somme(tab, taille)/taille;
    return m;
}
void chercherVal (int tab[], int n, int A, int *pos, int *nb_occ){
    *nb_occ = 0;
    *pos = -1;
    for(int i = 0; i< n; i++){
        if(tab[i] == A){
            if(*pos == -1)
                *pos = i;
            (*nb_occ)++;
        }
    }
}
int main(){
    int *tab, taille;
    do{
        cout<<"Donner une taille: ";
        cin>>taille;
    }while(taille <= 1 || taille > 10);
    tab = new int[taille];
    if(tab != NULL){
        for(int i = 0; i<taille; i++){
            cout<<"La valeur "<<i+1<<" : ";
            cin>>tab[i];
        }
        cout<<"La somme est: "<<somme(tab, taille)<<endl;
        cout<<"La moyenne est: "<<moyenne(tab, taille)<<endl<<endl;

        int var, pos, nbr_occ;
        cout<<"Donner une valeur: ";
        cin>>var;
        chercherVal(tab, taille, var, &pos, &nbr_occ);
        if(pos >= 0){
            cout<<"La valeur existe dans: "<<pos+1<<", "<<nbr_occ<<" fois.";
        }else{
            cout<<"La valeur n'existe pas."<<endl;
        }

        delete[] tab;
    }
    cout<<endl<<endl;
    return 0;
}