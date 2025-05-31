#include "../headers/Elipse.hpp"

Elipse ::Elipse():centro(){
            semiEjeMayor =0;
            semiEjeMenor =0;
        }
Elipse ::Elipse(float a, float b):centro(){
            semiEjeMayor =a;
            semiEjeMenor =b;
        }
Elipse ::Elipse(Punto c, float a, float b){
            centro = c;
            semiEjeMayor = a;
            semiEjeMenor = b;
        }

void Elipse ::setCentro(Punto punto){
            centro = punto;
        }
void Elipse :: setMayor(float a){
            semiEjeMayor = a;
        }
void Elipse ::setMenor(float b){
            semiEjeMenor = b;
        }

Punto Elipse ::  getCentro()const{return centro;}
float Elipse ::getMayor()const{return semiEjeMayor;}
float Elipse ::getMenor()const{return semiEjeMenor;}
