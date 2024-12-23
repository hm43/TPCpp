#include <iostream>
#include "Livre.h"
#include "Etudiant.h"

using namespace std;
void emprunterLivre(Etudiant &e, Livre &l){
    if(l.estEmprunte){
        cout<<"Le livre est deja emprinte"<<endl;
    }else if(e.nbLivresEmpruntes == MAX_LIVRES_EMPRUNTABLES){
        cout<<"Vous avez emprunter le max"<<endl;
    }else{
        for(int i = 0; i< MAX_LIVRES_EMPRUNTABLES; i++){
            if(e.livresEmpruntes[i] == nullptr){
                e.livresEmpruntes[i] = &l;
                e.nbLivresEmpruntes++;
                l.estEmprunte = true;
                cout<<"Livre emprinter"<<endl;
                break;
            }
        }
    }
}
void rendreLivre(Etudiant &e, Livre &l){
    for(int i =0; i< MAX_LIVRES_EMPRUNTABLES; i++){
        if(e.livresEmpruntes[i] == &l){
            e.livresEmpruntes[i] = nullptr;
            e.nbLivresEmpruntes--;
            l.estEmprunte = false;
            cout<<"Le livre est rendu"<<endl;
            break;
        }
    }
}
int main(){
    Livre l("titre", "auteur", "123");
    Livre l2("titre", "auteur", "123");
    Livre l3("titre", "auteur", "123");
    Livre l4("titre", "auteur", "123");
    Etudiant e("nom", 123);
    emprunterLivre(e, l);
    emprunterLivre(e, l2);
    emprunterLivre(e, l3);
    rendreLivre(e, l);
    emprunterLivre(e, l4);
    return 0;
}