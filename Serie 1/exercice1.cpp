#include<iostream>
#include<string>
#include<cmath>

using namespace std;
class Point{
    private:
        float x;
        float y;
    public:
        Point(){
            x = 0;
            y = 0;
        }
        Point(float x, float y){
            this->x = x;
            this->y = y;
        }
        string coordonnees(){
            return "("+to_string(x)+", "+to_string(y)+")";
        }
        float distance(Point p){
            return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
        }

};

int main(){
    Point p1;
    Point p2(2, 3);
    cout<<"La distance entre "<<p1.coordonnees()<<" et "<<p2.coordonnees()<<" est: "<<p1.distance(p2)<<endl;

    return 0;
}