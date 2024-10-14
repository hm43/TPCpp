#include<iostream>
#include<cstdlib>

using namespace std;
int somme(int *t, int taille){
    int s = 0;
    for(int i = 0; i < taille; i++){
       s += t[i]; 
    }
    return s;
}
float moyenne(int *t, int taille){
    return (float) somme(t, taille) / taille;
}

void chercherVal(int tab[], int n, int A, int &pos, int &nb_occ){
    pos = -1;
    nb_occ = 0;
    for(int i = 0; i< n; i++){
        if(tab[i] == A){
            if(pos == -1)
                pos = i;
            nb_occ++;
        }
    }
}
void chercherVal (int tab[], int n, int A, int *pos, int *nb_occ){
    *pos = -1;
    *nb_occ = 0;
    for(int i = 0; i< n; i++){
        if(tab[i] == A){
            if(*pos == -1)
                *pos = i;
            (*nb_occ)++;
        }
    }
}
int main(){
    int taille;
    do{
        cout<<"Entrer la taille du tableau moins de 10: ";
        cin>>taille;
        if(taille <0 || taille > 10){
            cout<<"La taille n'est pas entre 1 et 10."<<endl;
        }
    }while(taille < 0 || taille > 10);

    int *t = new int[taille];
    if( t != NULL){
        for(int i = 0; i<taille; i++){
            cout<<"ENtrer l'element "<<i+1<<" :";
            cin>>t[i];
        }
        cout<<"La somme des valeurs saisi est: "<<somme(t, taille)<<endl;
        cout<<"la moyenne du tableau est: "<<moyenne(t, taille)<<endl;
        int v, p, occ;
        cout<<"Donner une valeur pour la recherche: ";
        cin>>v;
        chercherVal(t, taille, v, &p, &occ);
        //chercherVal(t, taille, v, p, occ); // passage par reference
        if(p != -1)
            cout<<"La valeur existe dans la position: "<<p+1<<", "<<occ<<" fois."<<endl;
        else
            cout<<"La valeur n'existe pas"<<endl;
    }




    delete [] t;
    return 0;
}