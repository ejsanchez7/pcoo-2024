#ifndef FIGURA_H
#define FIGURA_H

#include <iostream>
#include "Posicion.h"

using namespace std;

class Figura{

    protected:
        Posicion posicion;
        float angulo;
        string color;

    public:
        Figura(){
            angulo = 0;
            color = "#000000";
        }

        Figura(float _angulo, string _color, Posicion _posicion){
            angulo = _angulo;
            color = _color;
            posicion = _posicion;
        }

        float get_angulo(){
            return angulo;
        }

        string get_color(){
            return color;
        }

        void set_angulo(float _angulo){
            angulo = _angulo;
        }

        void set_color(string _color){
            color = _color;
        }

        virtual void imprime_datos(){
            posicion.imprime_datos();
            cout << "Angulo: " << angulo << endl;
            cout << "Color: " << color << endl;
        }

        virtual float calcular_perimetro() = 0;

        virtual float calcular_area() = 0;

        virtual void dibujar() = 0;
};
#endif