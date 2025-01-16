#ifndef F
#define F

#include <string>

using namespace std;

class Figure{
    protected:
        double x, y, z;
    public:
        Figure(double = 0, double = 0, double =0);
        Figure(const Figure &);
        virtual void afficher() const;
        virtual string description() const;
};
#endif