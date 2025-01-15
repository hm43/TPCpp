#include "Forme.h"

class Cercle: public Forme{
    private:
        double rayon;
    public:
        Cercle(double = 0);
        Cercle(const Cercle &);

        double calculerAire() override;
        double calculerPerimetre() override;
        void afficherInfos() override;
};