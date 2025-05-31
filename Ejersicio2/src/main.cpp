#include "../headers/ProcesadorFigura.hpp"


// class Punto{
//     protected:
//         float x; 
//         float y;
//     public:
//         Punto(){x=0;y=0;}
//         Punto (float a,float b){x=a;y=b;}
//         ~Punto(){}

//         void setX(float a){x=a;}
//         void setY(float b){y=b;}

//         float getX()const{return x;}
//         float getY()const{return y;}

// };

// class Circulo{
//     private: 
//         Punto centro;
//         float r; 
//     public: 
//         Circulo():centro(){
//             r=0;
//         }
//         Circulo(float radio):centro(){
//             r=radio;
//         }
//         Circulo(Punto c, float radio){
//             centro = c;
//             r=radio;
//         }
//         ~Circulo(){};
        
//         void setCentro(Punto punto){
//             centro = punto;
//         }
//         void setRadio(float radio){r=radio;}

//         Punto getCentro()const{return centro;}
//         float getRadio()const{return r;}
// };

// class Elipse{
//     private: 
//         Punto centro; 
//         float semiEjeMayor;
//         float semiEjeMenor;
//     public: 
//         Elipse():centro(){
//             semiEjeMayor =0;
//             semiEjeMenor =0;
//         }
//         Elipse(float a, float b):centro(){
//             semiEjeMayor =a;
//             semiEjeMenor =b;
//         }
//         Elipse(Punto c, float a, float b){
//             centro = c;
//             semiEjeMayor = a;
//             semiEjeMenor = b;
//         }

//         ~Elipse(){};

//         void setCentro(Punto punto){
//             centro = punto;
//         }
//         void setMayor(float a){
//             semiEjeMayor = a;
//         }
//         void setMenor(float b){
//             semiEjeMenor = b;
//         }

//         Punto getCentro()const{return centro;}
//         float getMayor()const{return semiEjeMayor;}
//         float getMenor()const{return semiEjeMenor;}
// };

// class Rectangulo{
//     private: 
//         Punto vertice;
//         float ancho;
//         float largo; 
        
//     public: 
//         Rectangulo():vertice(){
//             ancho = 0;
//             largo = 0;
//         }
//         Rectangulo(float a, float l):vertice(){
//             ancho = a;
//             largo = l;
//         }
//         Rectangulo(Punto v, float a, float l){
//             vertice = v;
//             ancho = a;
//             largo = l;
//         }
//         ~Rectangulo(){}

//         void setVertice(Punto v){
//             vertice = v;
//         }
//         void setAncho(float a){ancho=a;}
//         void setLargo(float l){largo=l;}

//         Punto getVertice(){return vertice;}
//         float getAncho(){return ancho;}
//         float getLargo(){return largo;}

// };

// template<typename T>
// class ProcesadorFigura{
//     public: 
//         static void calcularArea() {
//             cout << "No se puede calcular el area de algo que no es una figura definida. Las figuras definidas son: \n\tCirculo\n\tElipse\n\tRectangulo"<<endl;
//         }
// };

// template<>
// class ProcesadorFigura <Circulo>{
//     public: 
//         static float calcularArea(Circulo c){
//             return( c.getRadio() * c.getRadio()) * 3.14; // cambniar a pi 
//         } 
// };

// template<>
// class ProcesadorFigura <Elipse>{
//     public: 
//         static float calcularArea(Elipse e){
//             return 3.14 * e.getMayor() * e.getMenor();
//         } 
// };

// template<>
// class ProcesadorFigura <Rectangulo>{
//     public: 
//         static float calcularArea(Rectangulo r){
//             return r.getAncho() * r.getLargo();
//         } 
// };



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
