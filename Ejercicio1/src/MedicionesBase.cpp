#include "../headers/MedicionesBase.hpp"

void MedicionBase :: serializar(ofstream& out){
             out.write(reinterpret_cast<const char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));//revisar si es tamaño float o si el puntero hace alguna diferencia. revidar tamaño
        }
void MedicionBase :: deserializar (ifstream& in){
            tiempoMedicion = make_unique<float>(0.0f);//chequear, presentacion de mariano slide 26
            in.read(reinterpret_cast<char*>(tiempoMedicion.get()),sizeof(*tiempoMedicion));//bueno no quiere tomar el read, qcy
        }
    
float MedicionBase :: getTiempo()const{return *tiempoMedicion;}
