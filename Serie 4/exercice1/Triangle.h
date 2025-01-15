#include "Forme.h"

class Triangle: public Forme{
    double cote1, cote2, cote3;
    public:
        Triangle(double =0, double =0, double =0);
        Triangle(const Triangle &);

        double calculerAire() override;
        double calculerPerimetre() override;
        void afficherInfos() override;
};