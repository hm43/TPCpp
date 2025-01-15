#include "Figure.h"

class Triangle: public Figure{
    double base, cote1, cote2, hauteur;
    public:
        Triangle(double=0, double=0, double=0,double=0, double=0, double=0, double=0);
        Triangle(const Triangle &);
        string description() const override;
        void afficher() const override;
};