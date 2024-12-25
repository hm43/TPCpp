#ifndef ETUD
#define ETUD
#include <string>
#include "Livre.h"

using namespace std;

const int MAX_LIVRES_EMPRUNTABLES = 3; 
class Etudiant {
private:
    string nom;
    int matricule;
    Livre* livresEmpruntes[MAX_LIVRES_EMPRUNTABLES]; 
    int nbLivresEmpruntes;
public:
    Etudiant( string , int );
    friend void emprunterLivre(Etudiant &e, Livre &l);
    friend void rendreLivre(Etudiant &e, Livre &l);
};
#endif