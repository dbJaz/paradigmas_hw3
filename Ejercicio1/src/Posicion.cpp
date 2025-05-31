#include "../headers/Posicion.hpp"
Posicion ::  Posicion (){
            latitud=0;
            longitud=0;
            altitud=0;
            tiempoMedicion = make_unique<float> (0.0);
        }
Posicion :: Posicion ( float lat, float lon, float alt,float t){
            latitud = lat;
            altitud =alt;
            longitud = lon;

            tiempoMedicion = make_unique<float> (t);
        }

Posicion :: Posicion(const Posicion& p){
            latitud = p.latitud;
            altitud = p.altitud;
            longitud = p.longitud;
            tiempoMedicion = make_unique<float> (p.getTiempo());
        }
void Posicion :: serializar(ofstream& out){
             MedicionBase ::serializar(out);
             out.write(reinterpret_cast<const char*>(&longitud),sizeof(float));
             out.write(reinterpret_cast<const char*>(&latitud),sizeof(float));
             out.write(reinterpret_cast<const char*>(&altitud),sizeof(float));
        }

void Posicion:: deserializar (ifstream& in) {
            MedicionBase ::deserializar(in);
            in.read(reinterpret_cast<char*>(&longitud),sizeof(float));
            in.read(reinterpret_cast<char*>(&latitud),sizeof(float));
            in.read(reinterpret_cast<char*>(&altitud),sizeof(float));
        }
void Posicion:: imprimir(){
            cout << "La posición del avion en tiempo "<< *tiempoMedicion << " es: \n\tLongitud: "<< longitud <<"\n\tLatitud: "<< latitud << "\n\tAltitud: " << altitud <<endl;
        }
