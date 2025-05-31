#include "../headers/ProcesadorFigura.hpp"


int main(){
    float r= 1.3f;
    float a = 4.5f; 
    float b = 2.9f;
    Circulo circulo(r);
    Elipse elipse(a,b);
    Rectangulo rectangulo(a,b);
    cout <<"El area del circulo deberia dar: "<< circulo.getRadio()*circulo.getRadio()*3.14<< " y usando el metodo de la clase devuelve "<<ProcesadorFigura<Circulo>::calcularArea(circulo) << endl;

    cout <<"El area del circulo deberia dar: "<< elipse.getMayor() * elipse.getMenor() * 3.14<< " y usando el metodo de la clase devuelve "<<ProcesadorFigura<Elipse>::calcularArea(elipse) << endl;

    cout <<"El area del circulo deberia dar: "<< rectangulo.getAncho() * rectangulo.getLargo() << " y usando el metodo de la clase devuelve "<<ProcesadorFigura<Rectangulo>::calcularArea(rectangulo) << endl;
    
    return 0;


}
