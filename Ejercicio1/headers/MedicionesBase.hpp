#pragma once
#include "IMediciones.hpp"
class MedicionBase: public IMediciones{
    protected: 
        unique_ptr<float> tiempoMedicion;
    public:
    virtual void serializar(ofstream& out) override;
    virtual void deserializar(ifstream& in) override;
    float getTiempo() const;
    virtual void imprimir() = 0;
    virtual ~MedicionBase() = default;
};
