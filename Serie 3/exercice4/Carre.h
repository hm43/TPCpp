#include "Figure.h"

class Carre: public Figure{
    protected:
        double largeur;
    public:
        Carre(double = 0, double = 0, double = 0, double = 0);
        Carre(const Carre&);
        void afficher() const override;
        string description() const override;
};