#include "../headers/Rectangulo.hpp"

Rectangulo ::Rectangulo():vertice(){
            ancho = 0;
            largo = 0;
        }
Rectangulo ::Rectangulo(float a, float l):vertice(){
            ancho = a;
            largo = l;
        }
Rectangulo :: Rectangulo(Punto v, float a, float l){
            vertice = v;
            ancho = a;
            largo = l;
        }

void Rectangulo :: setVertice(Punto v){
            vertice = v;
        }
void Rectangulo :: setAncho(float a){ancho=a;}
void Rectangulo ::setLargo(float l){largo=l;}

Punto Rectangulo ::getVertice(){return vertice;}

float Rectangulo ::getAncho(){return ancho;}
float Rectangulo ::getLargo(){return largo;}
