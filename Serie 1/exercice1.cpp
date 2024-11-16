#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class Point{
    private:
        double x;
        double y;
    public:
        Point();
        Point(double, double);
        string coord();
        double distance(Point p);

};

Point::Point(){
    cout<<"Par defaut"<<endl;
    x = 0;
    y = 0;
}
Point::Point(double a, double b){
    cout<<"Par parametres"<<endl;
    x = a;
    y = b;
}
string Point::coord(){
    return "("+to_string(x)+","+to_string(y)+")";
}

double Point::distance(Point p){
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
}

int main(){
    Point p1;
    Point p2(1, 2);
    cout<<"La distance entre "<<p1.coord()<<" et "<<p2.coord()
    <<" est "<<p1.distance(p2)<<endl;

    return 0;
}