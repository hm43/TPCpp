#include <iostream>
#include "Cercle.h"

using namespace std;

int main() {
    Forme* forme = new Cercle(5);
    
    forme->afficherInfos();
    cout << "Aire : " << forme->calculerAire() << endl;
    cout << "Périmètre : " << forme->calculerPerimetre() << endl;
    cout << "------------------------" << endl;
   
    delete forme;
   return 0;
}
