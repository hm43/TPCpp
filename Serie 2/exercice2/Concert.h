#include<iostream>
using namespace std;

class Concert{
    private:
        string nom, date;
        int heure, duree;
        static int totalConcerts;
    public:
        Concert(string, string, int, int);
        void afficherDetails(bool = true, bool=true, bool=true, bool=true) const;
        static int getTotalConcerts();
        static void resetSales();
};