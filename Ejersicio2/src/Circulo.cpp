#include "../headers/Circulo.hpp"

Circulo :: Circulo():centro(){
            r=0;
        }
Circulo :: Circulo(float radio):centro(){
            r=radio;
        }
Circulo :: Circulo(Punto c, float radio){
            centro = c;
            r=radio;
        }
void Circulo :: setCentro(Punto punto){
            centro = punto;
        }
void Circulo :: setRadio(float radio){r=radio;}
Punto Circulo ::  getCentro()const{return centro;}
float Circulo :: getRadio()const{return r;}