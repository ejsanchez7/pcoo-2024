#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <cmath>
#include "Figura.h"

using namespace std;

class Triangulo:public Figura {

    private:
        float base;
        float lado_a;
        float lado_b;
        float altura;
        
        bool valida_triangulo(float a, float b, float c){
            // Verificar si el triángulo es triángulo
            return true;
        };

    public:
        // Constructores
        Triangulo():Figura(){
            base = 1;
            altura = 1;
            lado_a = 1;
            lado_b = 1;
        }

        Triangulo(float _base, float _lado_a, float _lado_b, float _altura, float _angulo, string _color, Posicion _posicion):Figura(_angulo, _color, _posicion){
            if(valida_triangulo(_base, _lado_a, _lado_b)){
                base = _base;
                altura = _altura;
                lado_a = _lado_a;
                lado_b = _lado_b;
            }
            else{
                cout << "Los datos proporcionados no corresponden a un triángulo" << endl;
            }
        }

        // Getters
        float get_base(){
            return base;
        }

        float get_altura(){
            return altura;
        }

        float get_lado_a(){
            return lado_a;
        }

        float get_lado_b(){
            return lado_b;
        }

        // Setters
        void set_base(float _base){
            base = _base;
        }

        void set_altura(float _altura){
            altura = _altura;
        }

        void set_lado_a(float _lado_a){
            lado_a = _lado_a;
        }

        void set_lado_b(float _lado_b){
            lado_b = _lado_b;
        }

        // métodos
        void imprime_datos(){
            cout << "Figura: triángulo" << endl;
            cout << "Base: " << base << endl;
            cout << "Altura: " << altura << endl;
            cout << "Perímetro: " << calcular_perimetro() << endl;
            cout << "Área: " << calcular_area() << endl;
            Figura::imprime_datos();
        }

        float calcular_perimetro(){
            return base + lado_a + lado_b;
        }

        float calcular_area(){
            return (base * altura) / 2;
        }

        void dibujar(){
            cout << "Dibujar triángulo en posicion (" << posicion.get_x() << ", " << posicion.get_y() << ")";
        }
};

#endif