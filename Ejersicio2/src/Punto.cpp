#include "../headers/Punto.hpp"

Punto :: Punto(){x=0;y=0;}
Punto ::Punto (float a,float b){x=a;y=b;}
void Punto :: setX(float a){x=a;}
void Punto :: setY(float b){y=b;}
float Punto ::getX()const{return x;}
float Punto :: getY()const{return y;}