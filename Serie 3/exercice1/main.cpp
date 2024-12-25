#include <iostream>
#include "Livre.h"
#include "Etudiant.h"

using namespace std;
void emprunterLivre(Etudiant &e, Livre &l){
    if(l.estEmprunte){
        cout<<"Le livre non disponible."<<endl;
    }else if(e.nbLivresEmpruntes == MAX_LIVRES_EMPRUNTABLES){
        cout<<"Nombre max ."<<endl;
    }else{
        l.estEmprunte = true;
        l.dateEmprunt = "25 Dec 2024";
        for(int i = 0; i<MAX_LIVRES_EMPRUNTABLES; i++){
            if(e.livresEmpruntes[i] == nullptr){
                e.livresEmpruntes[i] = &l;
                e.nbLivresEmpruntes++;
                cout<<"Livre est emprunter."<<endl;
                break;
            }
        }
        
    }
}
void rendreLivre(Etudiant &e, Livre &l){
    for(int i = 0; i<MAX_LIVRES_EMPRUNTABLES; i++){
            if(e.livresEmpruntes[i] == &l){
                e.livresEmpruntes[i] = nullptr;
                e.nbLivresEmpruntes--;
                l.estEmprunte = false;
                l.dateEmprunt = "";
                cout<<"Livre est rendu."<<endl;
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
    emprunterLivre(e,l);
    emprunterLivre(e,l2);
    emprunterLivre(e,l3);
    rendreLivre(e, l2);
    emprunterLivre(e,l4);
  
    return 0;
}