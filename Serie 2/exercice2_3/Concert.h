#include<string>
using namespace std;

class Concert{
    string nom;
    string date;
    int heure;
    int duree;
    static int totalConcerts;
    public:
       Concert(string = "", string = "", int = 0, int = 0);
       ~Concert();
       void afficherDetails(bool =true, bool =true, bool =true, bool =true);
       static int getTotalConcerts();
       static void resetSales();
       Concert operator+(Concert &);
       Concert& operator-(int);
       bool operator==(Concert &);// c == c2 => c.operator==(c2)
       bool operator<(Concert &);
       bool operator>(Concert &);
       friend ostream& operator<<(ostream &, const Concert &);
       friend istream& operator>>(istream &, Concert &);
};