#include<iostream>

using namespace std;
int somme(int *p, int taille){
    int s = 0;
    for(int i = 0; i < taille; i++){
        s+=p[i];
        // s += *(p+i);
    }
    return s;
}

float moyenne(int *p, int taille){
    int s = somme(p, taille);
    return (float) s/taille;
}
void chercherVal (int tab[], int n, int A, int *pos, int *nb_occ){
    *nb_occ = 0;
    *pos = -1;
    for(int i= 0; i< n; i++){
        if(tab[i] == A){
            if(*nb_occ == 0)
                *pos = i;
            (*nb_occ)++;
        }
    }
}
int main(){
    int *tab, taille;
    do{
        cout<<"Entrer une taille du tableau entre 2 et 10: ";
        cin>>taille;
        if(taille > 10 || taille < 2){
            cout<<"La valeur invalide."<<endl;
        }
    }while(taille > 10 || taille < 2);

    tab = new int[taille];
    if(tab != NULL){
        for(int i = 0; i<taille; i++){
            cout<<"Entrer la valeur "<<i+1<<" : ";
            cin>>tab[i];
        }

        cout<<"La somme des valeurs est : "<<somme(tab, taille)<<endl;
        cout<<"La moyennes est: "<<moyenne(tab, taille)<<endl;
        



        delete[] tab;
    }
    return 0;
}