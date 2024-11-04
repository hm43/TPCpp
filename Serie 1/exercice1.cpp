#include<iostream>
#include<string>
#include <cmath>
using namespace std;
class Point{
    private:
        double x;
        double y;

    public:
        Point(){
            x = 0;
            x = 0;
        }
        Point(double x1, double y1){
            x = x1;
            y = y1;
        }
        string afficher(){
            string s = "("+to_string(x)+","+to_string(y)+")";
            return s;
        }
        double distance(Point p){
            return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2)) ;
        }
};

int main(){
    Point p1, p2(1,2);
    cout<<"La distance entre "<<p1.afficher()<<" et "<<p2.afficher()<<" est: "<<p1.distance(p2)<<endl;
}