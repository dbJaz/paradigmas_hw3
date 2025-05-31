#include "../headers/SaveFlightData.hpp"
int main(){
    Presion presion (101.3f, 5.8f, 6.1f);
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3f);
    cout<<"-----*-----*-----*-----*-----*-----*-----*-----*-----" << endl;
    presion.imprimir();
    posicion.imprimir();
    cout << "-----*-----*-----*-----*-----*-----*-----*-----*-----" << endl;
    ofstream out("presion.txt", ios::binary);
    if(out.is_open()){
        presion.serializar(out);
        out.close();
    }
    ofstream file("posicion.txt", ios::binary);
    if(file.is_open()){
        posicion.serializar(file);
        file.close();
    }

    Presion presion2;
    Posicion posicion2;
    ifstream in("presion.txt", ios::binary);
    if(in.is_open()){
        presion2.deserializar(in);
        in.close();
    }
    ifstream filein("posicion.txt", ios::binary);
    if(filein.is_open()){
        posicion2.deserializar(filein);
        filein.close();
    }
    cout<<"-----*-----*-----*-----*--2--*-----*-----*-----*-----" << endl;
    presion2.imprimir();
    posicion2.imprimir();
    cout << "-----*-----*-----*-----*-----*-----*-----*-----*-----" << endl;

    saveFlightData data(posicion,presion);
    cout<<"-----*-----*-----*-----*-FD--*-----*-----*-----*-----" << endl;
    data.imprimir();
    cout << "-----*-----*-----*-----*-----*-----*-----*-----*-----" << endl;
    ofstream dataout("flightData.txt", ios::binary);
    if(dataout.is_open()){
        data.serializar(dataout);
        dataout.close();
    }

    saveFlightData data2(posicion2,presion2);
    ifstream datain("flightData.txt", ios::binary);
    if(datain.is_open()){
        data2.deserializar(datain);
        datain.close();
    }
    cout<<"-----*-----*-----*-----*-FD2--*-----*-----*-----*-----" << endl;
    data2.imprimir();
    cout << "-----*-----*-----*-----*-----*-----*-----*-----*-----" << endl;
    return 0;
}