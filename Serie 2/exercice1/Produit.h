#include <string>
using namespace std;
class Produit{
    static float totalSales;
    string nom;
    float prix;
    public:
        Produit(string nom, float prix);
        ~Produit();
        static float getTotalSales();
        static void resetSales();
};