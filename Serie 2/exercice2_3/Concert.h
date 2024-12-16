
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
        Concert(string="", string="", int=0, int=0);
        void afficherDetails(bool afficherNom = true, bool afficherDate = true, bool afficherHeure = true, bool afficherDuree = true);
        static int getTotalConcerts();
        // exercice 3
        Concert operator+(const Concert &);
        Concert& operator-(int);
        bool operator==(const Concert &);
        bool operator<(const Concert &);
        bool operator>(const Concert &);
        friend ostream& operator<<( ostream &, const Concert &);
        friend istream& operator>>( istream &,  Concert &);
};