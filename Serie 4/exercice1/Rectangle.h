#include "Forme.h"

class Rectangle: public Forme{
    private:
        double longueur, largeur;
    public:
        Rectangle(double = 0, double = 0);
        Rectangle(const Rectangle&);
        double calculerAire() override;
        double calculerPerimetre() override;
        void afficherInfos() override;
};