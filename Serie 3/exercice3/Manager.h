#include "Employe.h"

class Manager: public Employe{
    private:
        int nbrEmp;
    public:
        Manager(string= "", int = 0, double = 0, int = 0);
        Manager(const Manager &);
        void afficherInformation() const override;
};