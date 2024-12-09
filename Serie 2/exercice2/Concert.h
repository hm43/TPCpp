#include <iostream>
#include <string>


using namespace std;

class Concert{
    private:
        string nom;
        string date;
        int heure;
        int duree;
        static int totalConcerts;
    public:
        Concert(string, string, int, int);
        void afficherDetails(bool=true, bool=true, bool=true, bool=true);
        static int getTotalConcerts();
        static void resetSales();
};