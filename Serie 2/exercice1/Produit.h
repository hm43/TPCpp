
#include <string>
using namespace std;

class Produit{
    private:
        static float totalSales;
        string nom;
        float prix;
    public:
        Produit(string, float);
        ~Produit();
        static float getTotalSales();
        static void resetSales();
};