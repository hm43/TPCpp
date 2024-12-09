
#include <string>
using namespace std;

class Concert{
    private:
        string nom;
        string date;
        int heure;
        int duree;
        static int totalconcerts;
    public:
        Concert(string, string, int, int);
        void afficherDetails(bool afficherNom = true, bool afficherDate = true, bool afficherHeure = true, bool afficherDuree = true);
        static int getTotalConcerts();
};