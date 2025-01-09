#ifndef E
#define E

#include <string>
using namespace std;

class Employe{
    protected:
        string nom;
        int age;
        double salaire;
    public:
        Employe(string= "", int = 0, double = 0);
        Employe(const Employe &);
        virtual void afficherInformation() const;
};

#endif