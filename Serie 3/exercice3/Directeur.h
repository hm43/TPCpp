#include "Employe.h"

class Directeur: public Employe{
    private:
        string objectifs;
    public:
        Directeur(string = "", int = 0, double= 0, string="");
        Directeur(const Directeur &);
        void afficherInformation() const override;
};