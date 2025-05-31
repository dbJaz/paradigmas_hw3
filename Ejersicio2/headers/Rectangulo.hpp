#pragma once
#include "Punto.hpp"

class Rectangulo{
    private: 
        Punto vertice;
        float ancho;
        float largo; 
        
    public: 
        Rectangulo();
        Rectangulo(float a, float l);
        Rectangulo(Punto v, float a, float l);
        ~Rectangulo(){}

        void setVertice(Punto v);
        void setAncho(float a);
        void setLargo(float l);

        Punto getVertice();
        float getAncho();
        float getLargo();

};
