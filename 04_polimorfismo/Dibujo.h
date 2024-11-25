#ifndef DIBUJO_H
#define DIBUJO_H

#include <iostream>
#include <vector>
#include "Figura.h"
#include "Circulo.h"
#include "Triangulo.h"

using namespace std;

class Dibujo {

    private:
        vector<Figura*> figuras;

    public:
        Dibujo(){
            // Constructor
        }

        // Getters
        vector<Figura*> get_figuras() {
            return figuras;
        }

        // Métodos

        // Implementación de composición
        // void agregar_circulo(Circulo circ){circulos.push_back(circ)} agregación
        Circulo* agregar_circulo(float radio, float angulo, string color, Posicion posicion) {
            // Paso 1: Crear el círculo
            Circulo* circulo = new Circulo(radio, angulo, color, posicion);
            // Paso 2: Añadir el circulo
            figuras.push_back(circulo);
            
            return circulo;
        }

        Triangulo* agregar_triangulo(float base, float lado_a, float lado_b, float altura, float angulo, string color, Posicion posicion) {
            // Paso 1: Crear el triangulo
            Triangulo* triangulo = new Triangulo(base, lado_a, lado_b, altura, angulo, color, posicion);
            // Paso 2: Añadir el triangulo
            figuras.push_back(triangulo);
           
            return triangulo;
        }

        void eliminar_figura(int indice){
            figuras.erase(figuras.begin() + indice);
        }

        void dibujar(){
            
            if(figuras.size() > 0){

                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->dibujar(); 
                    cout << endl;
                }

            }
            else{
                cout << "El dibujo está vacío." << endl;
            }
        }

        void imprime_datos(){
            
            if(figuras.size() > 0){

                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->imprime_datos();
                    cout << "----------------------" << endl;
                }

            }
            else{
                cout << "El dibujo está vacío." << endl;
            }
        }
};

#endif