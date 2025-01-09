#include "Employe.h"

class Technicien: public Employe{
    private:
        string domaine;
    public:
        Technicien(string = "", int = 0, double= 0, string="");
        Technicien(const Technicien &);
        void afficherInformation() override;
};