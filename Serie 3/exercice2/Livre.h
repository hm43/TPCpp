#include "RessourceMedia.h"

class Livre: public RessourceMedia{
    string genre;
    int nbrPages;
    public:
        Livre(string, string, int, string, int);
        void afficherDetails() const override;
};