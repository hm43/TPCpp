#ifndef LIVRE
#define LIVRE
#include <string>
class Etudiant;
using namespace std;

const int MAX_LIVRES_EMPRUNTABLES = 3; 

class Livre{
private:
    string titre;
    string auteur;
    string isbn;
    bool estEmprunte;
    string dateEmprunt;
public:
    Livre( string,  string  ,   string  );
    friend void emprunterLivre(Etudiant & e, Livre &l);
    friend void rendreLivre(Etudiant &e, Livre &l);
};

#endif