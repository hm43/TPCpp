#include <string>

using namespace std;

class Produit{
    private:
        string nom;
        float prix;
        static float totalSales;
    public:
        Produit(string , float);
        ~Produit();
        static float getTotalSales();
        static void resetSales();

};