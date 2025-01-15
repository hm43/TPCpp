#include "Figure.h"

class Carre: public Figure{
    double cote;
    public:
        Carre(double=0, double=0, double=0,double=0);
        Carre(const Carre &);
        string description() const override;
        void afficher() const override;
};