#pragma once
#include "Precion.hpp"
#include "Posicion.hpp"

class saveFlightData{
    public: 
        Posicion posicion;
        Presion presion;
        saveFlightData(const Posicion& p, const Presion& q);
        void serializar(ofstream& out);
        void deserializar(ifstream& in);
        void imprimir();

        virtual ~saveFlightData() = default;
};