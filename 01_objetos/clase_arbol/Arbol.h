// Asegurar que el archivo se incluya solo una vez
#ifndef ARBOL_H
#define ARBOL_H

#include<iostream>

using namespace std;

class Arbol {
    /*
    OPERADORES DE ACCESO:
        public: el elemento es accesible desde afuera del objeto
        private: el elemento es accesible solo desde adentro del objeto
    */
    // Atributos de la clase
    private:
        string especie;
        float edad; // años
        float tamanio; // metros
    
    public:
        // Constructor por omisión o por defecto
        Arbol() {
            especie = "desconocida";
            edad = 0;
            tamanio = 1;
        }

        // Contructor con parámetros
        Arbol(string _especie, float _edad, float _tamanio) {
            especie = _especie;
            edad = _edad;
            tamanio = _tamanio;
        }

        // Getters (devuelven el valor de un atributo privado)
        string get_especie() {
            return especie;
        }

        float get_edad() {
            return edad;
        }

        float get_tamanio() {
            return tamanio;
        }

        // Setters (modifican el valor de un atributo privado)
        void set_especie(string _especie) {
            especie = _especie;
        }

        void set_edad(float _edad) {
            edad = _edad;
        }

        void set_tamanio(float _tamanio) {
            tamanio = _tamanio;
        }

        void crece(float tam) {
            tamanio += tam;
        }

        void imprime_datos() {
            cout << "Especie: " << especie << endl;
            cout << "Edad: " << edad << endl;
            cout << "Tamaño: " << tamanio << endl;
        }
};

#endif