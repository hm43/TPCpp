#include<iostream>
#include "Triangle.h"
#include "Carre.h"
using namespace std;

void afficherInfos(Figure & f){
    cout<<"Je suis un(e) "<<f.description()<<endl;
    f.afficher();
    cout<<endl;
}

int main(){
    Triangle t(0,0,0,5, 8, 3, 4 );
    Carre c(0,0,0,4);
    afficherInfos(t);
    afficherInfos(c);
    
    return 0;
}