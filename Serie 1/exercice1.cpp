#include <iostream>
#include <cmath>

using namespace std;
class Point{
    private:
        double x;
        double y;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(double x1, double y1){
            x = x1;
            y = y1;
        }
        string  afficher(){
            return "("+to_string(x)+", "+to_string(y)+")\n";
        }
        double distance(Point p){
            return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
        }
};

int main(){
    Point p1;
    Point p2(2, 5);
    cout<<p1.afficher();
    cout<<p2.afficher();
    cout<<"La distance est: "<<p1.distance(p2)<<endl;

}