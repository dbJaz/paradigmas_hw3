#pragma once 
#include <iostream>
using namespace std;

class Punto{
    protected:
        float x; 
        float y;
    public: 
        Punto();
        Punto (float a,float b);

        void setX(float a);
        void setY(float b);

        float getX()const;
        float getY()const;
};