#pragma once
#include "Punto.hpp"

class Circulo{
    private: 
        Punto centro;
        float r; 
    public: 
        Circulo();
        Circulo(float radio);
        Circulo(Punto c, float radio);
        ~Circulo(){};
        
        void setCentro(Punto punto);
        void setRadio(float radio);

        Punto getCentro()const;
        float getRadio()const;

};