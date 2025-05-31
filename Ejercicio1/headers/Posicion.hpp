#pragma once
#include "MedicionesBase.hpp"

class Posicion: public MedicionBase{
    public: 
        float latitud;
        float longitud;
        float altitud;
        Posicion();
        Posicion ( float lat, float lon, float alt,float t);
        Posicion(const Posicion& p);
        void serializar(ofstream& out)override;
        void deserializar (ifstream& in) override;
        void imprimir() override;

        virtual ~Posicion() = default;
};