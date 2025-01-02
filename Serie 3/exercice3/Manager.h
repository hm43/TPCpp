#include "Employe.h"

class Manager: public Employe{
    private:
        int nbrEmploye;
    public:
        Manager(string = "", int = 0, double= 0, int=0);
        Manager(const Manager &);
        void afficherInformation() override;
};