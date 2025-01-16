#include <iostream>
#include <vector>

#include "Cercle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

int main(){
    vector<Forme*> formes;
    formes.push_back(new Cercle(5));
    formes.push_back(new Rectangle(4, 6));
    formes.push_back(new Triangle(3, 4, 5));



    for (const auto& forme : formes) {
        forme->afficherInfos();
        cout << "Aire : " << forme->calculerAire() << endl;
        cout << "Périmètre : " << forme->calculerPerimetre() << endl;
        cout << "------------------------" << endl;
    }

    // N'oubliez pas de libérer la mémoire
    for (auto& forme : formes) {
        delete forme;
    }



    return 0;
}