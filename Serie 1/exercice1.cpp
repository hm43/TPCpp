#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Point{
    private:
        float x, y;
    public:
        Point();
        Point(float, float);
        string coord() const;
        double distance(Point) const;
};
Point::Point(){
    x = 0;
    y = 0;
}
Point::Point(float x, float y){
    this->x = x;
    this->y = y;
}
string Point::coord() const {
    return "("+to_string(x)+","+to_string(y)+")";
}
double Point::distance(Point deuxieme_point) const{
    return sqrt(pow(x - deuxieme_point.x, 2) + 
    pow(y - deuxieme_point.y, 2));
}
int main(){
    Point p1;
    Point p2(1, 2);
    cout<<"La distance entre "<<p1.coord()<<" et "<<p2.coord()
    <<" est: "<<p1.distance(p2)<<"."<<endl;

    return 0;
}