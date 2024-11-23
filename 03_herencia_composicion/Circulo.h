#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "Figura.h"

using namespace std;

class Circulo:public Figura {

    private:
        float radio;

    public:
        // Constructores
        Circulo():Figura(){
            radio = 1;
        }

        Circulo(float _radio, float _angulo, string _color, Posicion _posicion):Figura(_angulo, _color, _posicion){
            radio = _radio;
        }

        // Getters
        float get_radio(){
            return radio;
        }

        // Setters
        void set_radio(float _radio){
            radio = _radio;
        }

        // métodos
        void imprime_datos(){
            cout << "Figura: circulo" << endl;
            cout << "Radio: " << radio << endl;
            cout << "Perímetro: " << calcular_perimetro() << endl;
            cout << "Área: " << calcular_area() << endl;
            Figura::imprime_datos();
        }

        float calcular_perimetro(){
            return 2 * M_PI * radio;
        }

        float calcular_area(){
            return M_PI * pow(radio, 2);
        }
};

#endif