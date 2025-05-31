#include "../headers/Precion.hpp"

Presion :: Presion () {
            presionDinamica=0;
            presionEstatica=0;
            tiempoMedicion =0;
            tiempoMedicion = make_unique<float> (0.0);
        }
    
Presion ::Presion (float p, float q, float t){
            presionDinamica=q;
            presionEstatica=p;
            
            tiempoMedicion = make_unique<float> (t);
        }
Presion :: Presion(const Presion& q){
            presionDinamica = q.presionDinamica;
            presionEstatica=q.presionEstatica;
            tiempoMedicion = make_unique<float> (q.getTiempo());

        }
void Presion :: serializar(ofstream& out){
            MedicionBase ::serializar(out);
            out.write(reinterpret_cast<const char*>(&presionEstatica),sizeof(float));
            out.write(reinterpret_cast<const char*>(&presionDinamica),sizeof(float));
        }

void Presion :: deserializar (ifstream& in) {
            MedicionBase ::deserializar(in);
            in.read(reinterpret_cast< char*>(&presionEstatica),sizeof(float));
            in.read(reinterpret_cast< char*>(&presionDinamica),sizeof(float));
        }
void Presion :: imprimir(){
            cout << "La presión del avion en tiempo "<< *tiempoMedicion << " es: \n\tPresion estatica: "<< presionEstatica <<"\n\tPresion dinamca: "<< presionDinamica <<endl;
        }
