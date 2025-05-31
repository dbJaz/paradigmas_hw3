#pragma once
#include <iostream>
#include "Circulo.hpp"
#include "Elipse.hpp"
#include "Rectangulo.hpp"


template<typename T>
class ProcesadorFigura{
    public: 
        static void calcularArea() {
            cout << "No se puede calcular el area de algo que no es una figura definida. Las figuras definidas son: \n\tCirculo\n\tElipse\n\tRectangulo"<<endl;
        }
};

template<>
class ProcesadorFigura <Circulo>{
    public: 
        static float calcularArea(Circulo c){
            return( c.getRadio() * c.getRadio()) * 3.14f; // se agrega la f para usar floats en lugar de doubles y evitar warnings
        } 
};

template<>
class ProcesadorFigura <Elipse>{
    public: 
        static float calcularArea(Elipse e){
            return 3.14f * e.getMayor() * e.getMenor();
        } 
};

template<>
class ProcesadorFigura <Rectangulo>{
    public: 
        static float calcularArea(Rectangulo r){
            return r.getAncho() * r.getLargo();
        } 
};
