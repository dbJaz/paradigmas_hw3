#include "../headers/SaveFlightData.hpp"

saveFlightData :: saveFlightData(const Posicion& p, const Presion& q):posicion(p),presion(q){}

void saveFlightData :: serializar(ofstream& out){
            posicion.serializar(out);
            presion.serializar(out);
        }

void saveFlightData :: deserializar(ifstream& in){
            posicion.deserializar(in);
            presion.deserializar(in);
        }

void saveFlightData :: imprimir(){
            posicion.imprimir();
            presion.imprimir();
        }

// class saveFlightData{
//     public: 
//         Posicion posicion;
//         Presion presion;

//         saveFlightData(const Posicion& p, const Presion& q):posicion(p),presion(q){}
//         void serializar(ofstream& out){
//             posicion.serializar(out);
//             presion.serializar(out);
//         }
//         void deserializar(ifstream& in){
//             posicion.deserializar(in);
//             presion.deserializar(in);
//         }
//         void imprimir(){
//             posicion.imprimir();
//             presion.imprimir();
//         }
// };
