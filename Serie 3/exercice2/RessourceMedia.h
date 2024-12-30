#include <string>

using namespace std;

class RessourceMedia{
    protected:
        string titre;
        string auteur;
        int anneePublication;
    public:
        RessourceMedia(string, string, int);
        void afficherDetails();
};