#include "Etudiant.h"

Etudiant::Etudiant( string  n, int m) : nom(n), matricule(m), nbLivresEmpruntes(0) {
    for (int i = 0; i < MAX_LIVRES_EMPRUNTABLES; ++i) {
        livresEmpruntes[i] = nullptr;
    }
}