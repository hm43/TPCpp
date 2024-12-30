#include "RessourceMedia.h"

class Magazine: public RessourceMedia{
    private:
        string freq;
        int numero_actuel;
    public:
        Magazine(string, string, int, string, int);
        void afficherDetails() const;
};