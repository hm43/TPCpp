#include <iostream>
#include "Forme.h"
#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main() {
    Forme* formes[3] = {new Cercle(5), new Rectangle(3, 8), new Triangle(3, 4, 5)};

    for(int i = 0; i < 3; i++){
    
        formes[i]->afficherInfos();
        cout << "Aire : " << formes[i]->calculerAire() << endl;
        cout << "Périmètre : " << formes[i]->calculerPerimetre() << endl;
        cout << "------------------------" << endl;
    }
    for(int i = 0; i < 3; i++){
        delete formes[i];
    }

    return 0;
}
