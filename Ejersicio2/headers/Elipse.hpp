#pragma once
#include "Punto.hpp"

class Elipse{
    private: 
        Punto centro; 
        float semiEjeMayor;
        float semiEjeMenor;
    public: 
        Elipse();
        Elipse(float a, float b);
        Elipse(Punto c, float a, float b);

        ~Elipse(){};

        void setCentro(Punto punto);
        void setMayor(float a);
        void setMenor(float b);

        Punto getCentro()const;
        float getMayor()const;
        float getMenor()const;
};
