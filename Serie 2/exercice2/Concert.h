#include<string>
using namespace std;

class Concert{
    private:
        string nom;
        string date;
        int heure, duree;
        static int totalConcerts;
    public:
        Concert(string, string, int, int);
        ~Concert();
        void afficherDetails(bool=true, bool=true, bool=true, bool=true) const;
        static int getTotalConcerts();
        static void resetSales();
};