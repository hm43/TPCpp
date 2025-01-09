#include <iostream>

using namespace std;
class Figure{
    protected:
        double x, y, z;
    public:
        Figure(double x=0, double y=0, double z=0);
        Figure(const Figure &);
        virtual void afficher() const;
        virtual string description() const;
};
Figure::Figure(double x, double y, double z): x(x), y(y), z(z){}
Figure::Figure(const Figure & f): x(f.x), y(f.y), z(f.z){}
void Figure::afficher() const{
    cout<<x<<" "<<y<<" "<<z<<" ";
}
string Figure::description() const{
    return "Figure";
}
class Triangle: public Figure{
    double base, cote1, cote2, hauteur;
    public:
        Triangle(double x=0, double y=0, double z=0, double base = 1, double  cote1 = 1, double cote2 = 1, double hauteur = 1);
        Triangle(const Triangle &);
        void afficher() const override;
        string description() const override;
};

Triangle::Triangle(double x, double y, double z, double base, double  cote1, double cote2, double hauteur):
Figure(x, y, z), base(base), cote1(cote1), cote2(cote2), hauteur(hauteur){}
Triangle::Triangle(const Triangle &t):Figure(t), base(t.base), cote1(t.cote1), cote2(t.cote2), hauteur(t.hauteur){}
void Triangle::afficher() const {
    Figure::afficher();
    cout<<base<<" "<<cote1<<" "<<cote2<<" "<<hauteur<<endl;
}
string Triangle::description() const{
    return "Triangle";
}
void afficherInfos(Figure * f){
    cout<<"Je suis un(e) "<<f->description()<<endl;
    cout<<"Mes attributs :";
    f->afficher();
}
int main(){
    Figure f(2, 3, -1);
    Triangle t(2, 3, -1, 20, 15, 18, 10);
    afficherInfos(&t);

    return 0;
}