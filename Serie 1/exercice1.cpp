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
            cout<<"Constructeur par default"<<endl;
            x = 0;
            y = 0;
        }
        

        Point(float x, float y){
            cout<<"Constructeur par parametres"<<endl;
            this->x = x;
            this->y = y;
        }
        string coordoonees(){
            return "("+to_string(x)+","+to_string(y)+")";
        }
        float distance(Point p){
            return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
        }

};


int main(){
    Point p1; 
    Point p2(1, 2);
    cout<<"La distance entre "<<p1.coordoonees()<<" et "<<p2.coordoonees()<<" est: "<<p1.distance(p2)<<endl;
    return 0;
}