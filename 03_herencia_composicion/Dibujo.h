#ifndef DIBUJO_H
#define DIBUJO_H

#include <iostream>
#include <vector>
#include "Circulo.h"
#include "Triangulo.h"

using namespace std;

class Dibujo {

    private:
        vector<Circulo> circulos;
        vector<Triangulo> triangulos;

    public:
        Dibujo(){
            // Constructor
        }

        // Getters
        vector<Circulo> get_circulos() {
            return circulos;
        }

        vector<Triangulo> get_triangulos() {
            return triangulos;
        }

        // Métodos

        // Implementación de composición
        // void agregar_circulo(Circulo circ){circulos.push_back(circ)} agregación
        Circulo agregar_circulo(float radio, float angulo, string color, Posicion posicion) {
            // Paso 1: Crear el círculo
            Circulo nuevo = Circulo(radio, angulo, color, posicion);
            // Paso 2: Añadir el circulo
            circulos.push_back(nuevo);
            return nuevo;
        }

        void eliminar_circulo(int indice){
            circulos.erase(circulos.begin() + indice);
        }

        Triangulo agregar_triangulo(float base, float lado_a, float lado_b, float altura, float angulo, string color, Posicion posicion) {
            // Paso 1: Crear el triangulo
            Triangulo nuevo = Triangulo(base, lado_a, lado_b, altura, angulo, color, posicion);
            // Paso 2: Añadir el triangulo
            triangulos.push_back(nuevo);
            return nuevo;
        }

        void eliminar_triangulo(int indice){
            triangulos.erase(triangulos.begin() + indice);
        }

        void dibujar(){
            for(int i = 0; i < circulos.size(); i++){
                circulos[i].dibujar(); 
                cout << endl;
            }
            for(int i = 0; i < triangulos.size(); i++){
                triangulos[i].dibujar();
                cout << endl;
            }
        }
};

#endif