#pragma once
#include "MedicionesBase.hpp"
class Presion : public MedicionBase {
    public:
        float presionEstatica;
        float presionDinamica;
        Presion();
        Presion(float p, float q, float t);
        Presion(const Presion& q);
        void serializar(ofstream& out) override;
        void deserializar(ifstream& in) override;
        void imprimir() override;

        virtual ~Presion() = default;
};