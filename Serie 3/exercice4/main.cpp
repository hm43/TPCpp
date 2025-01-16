
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Carre.h"

using namespace std;

void afficherInfos(Figure &f){
    cout<<"Je suis un(e) "<<f.description()<<endl;
    cout<<"Mes attributs sont: ";
    f.afficher();

    cout<<endl;
}


int main(){
    Triangle t(0,0,0, 5, 8, 3, 6);
    Carre c(0,0,0, 4);
    afficherInfos(t);
    afficherInfos(c);
    
    


    return 0;
}