#include "Figure.h"
#include <iostream>

using namespace std;

Figure::Figure(double x, double y, double z):x(x), y(y), z(z){}
Figure::Figure(const Figure & f):x(f.x), y(f.y), z(f.z){} 
string Figure::description() const{
    return "Figure";
}
void Figure::afficher() const{
    cout<<x<<" "<<y<<" "<<z;
}