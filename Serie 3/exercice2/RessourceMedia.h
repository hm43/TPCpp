#ifndef R
#define R

#include <string>

using namespace std;

class RessourceMedia{
    protected:
        string titre;
        string auteur;
        int annee;
    public:
        RessourceMedia(string, string, int);
        virtual void afficherDetails() const;
};
#endif