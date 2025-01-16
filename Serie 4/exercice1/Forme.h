#ifndef F

#define F

class Forme{
    public:
        virtual double calculerAire() = 0;
        virtual double calculerPerimetre() = 0;
        virtual void afficherInfos() = 0;
};

#endif