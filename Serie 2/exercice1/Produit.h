#include <string>
using namespace std;

class Produit{
    private:
        static float totalSales;
        float prix;
        string nom;
    public:
        Produit(string, float);
        ~Produit();
        static float getTotalSales();
        static void resetSales();
};