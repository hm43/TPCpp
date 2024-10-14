#include<iostream>

using namespace std;
int somme(int t[], int taille){
    int s =0;
    for(int i = 0; i < taille; i++){
        s += t[i];
    }
    return s;
}
float moyenne(int *t, int taille){
    float m = (float) somme(t, taille)/taille;
    return m;
}
void chercherVal (int tab[], int n, int A, int &pos, int &nb_occ){
    pos = -1;
    nb_occ = 0;
    for(int i = 0; i<n; i++){
        if(tab[i] == A){
            if(nb_occ == 0)
                pos = i;
            nb_occ++;
        }
    }
}
void chercherVal (int tab[], int n, int A, int *pos, int *nb_occ){
    *pos = -1;
    *nb_occ = 0;
    for(int i = 0; i<n; i++){
        if(tab[i] == A){
            if(*nb_occ == 0)
                *pos = i;
            (*nb_occ)++;
        }
    }
}
void triCroissant(int tab[], int taille){
    for(int i = 0; i< taille-1; i++){
        for(int j = i+1; j< taille; j++){
            if(tab[i] > tab[j]){
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}
void afficher(int tab[], int taille){
    for(int i = 0; i< taille; i++){
        cout<<tab[i]<<", ";
    }
    cout<<endl;
}
int main(){
    int *tab, taille;
    do{
        cout<<"Entrer la taille entre 1 et 10: ";
        cin>>taille;
        if(taille > 10 || taille < 0){
            cout<<"La valeur n'est pas valide."<<endl;
        }
    }while(taille > 10 || taille < 0);
    tab = new int[taille];
    if(tab != NULL){
        for(int i = 0; i < taille; i++){
            cout<<"Entrer la valeur "<<i+1<<" :";
            cin>>tab[i];
        }
        cout<<"La somme des valeurs est: "<<somme(tab,taille)<<endl;
        cout<<"La moyenne est: "<<moyenne(tab, taille)<<endl;
        int valeur, pos, nbr_occ;
        cout<<"Donner une valeur: ";
        cin>>valeur;
        //chercherVal(tab, taille, valeur, &pos, &nbr_occ);
        chercherVal(tab, taille, valeur, pos, nbr_occ);
        if(nbr_occ != 0){
            cout<<"La valeur existe dans la position: "<<pos<<", "<<nbr_occ<<" fois."<<endl;
        }else{
            cout<<"LA valeur n'existe pas."<<endl;
        }
        triCroissant(tab, taille);
        afficher(tab, taille);
    }


    return 0;
}