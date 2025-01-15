#include <iostream>
#include "Forme.h"
#include "Cercle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    Forme* formes[2] = {new Cercle(5), new Rectangle(3, 8)};

    for(int i = 0; i < 2; i++){
    
        formes[i]->afficherInfos();
        cout << "Aire : " << formes[i]->calculerAire() << endl;
        cout << "Périmètre : " << formes[i]->calculerPerimetre() << endl;
        cout << "------------------------" << endl;
    }
    
    delete [] formes;

    return 0;
}
