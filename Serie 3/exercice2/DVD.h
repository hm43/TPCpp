#include "RessourceMedia.h"

class DVD:public RessourceMedia{
    private:
        string genre;
        int duree;
    public:
        DVD(string, string, int, string, int);
        void afficherDetails() const;
};