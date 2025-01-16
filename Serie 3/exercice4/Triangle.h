#include "Figure.h"

class Triangle: public Figure{
    protected:
        double base, cote1, cote2, hauteur;
    public:
        Triangle(double = 0, double = 0, double = 0, double = 0, double = 0, double = 0, double = 0);
        Triangle(const Triangle&);
        void afficher() const override;
        string description() const override;
};