#ifndef F
#define F

#include <string>

using namespace std;

class Figure{
    protected:
        double x, y, z;
    public:
        Figure(double=0, double=0, double=0);
        Figure(const Figure &);
        virtual string description() const;
        virtual void afficher() const;
};

#endif