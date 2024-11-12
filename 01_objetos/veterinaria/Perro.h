#ifndef PERRO_H
#define PERRO_H

#include <iostream>
#include <string>
#include "Dueno.h"

using namespace std;
/*
PERRO
    raza
    peso
    edad
    dueno
*/

class Perro {
    private:
        string raza;
        float peso;
        int edad;
        Dueno dueno;

    public:
        // Constructor por omisión
        Perro() {
            raza = "";
            peso = 0;
            edad = 0;
        }
        // Constructor por parámetros
        Perro(string _raza, float _peso, int _edad, Dueno _dueno) {
            raza = _raza;
            peso = _peso;
            edad = _edad;
            dueno = _dueno;
        }

        // Getters
        string get_raza() {
            return raza;
        }

        float get_peso() {
            return peso;
        }

        int get_edad() {
            return edad;
        }

        Dueno get_dueno() {
            return dueno;
        }

        // Setters
        void set_raza(string _raza) {
            raza = _raza;
        }

        void set_peso(float _peso) {
            peso = _peso;
        }

        void set_edad(int _edad) {
            edad = _edad;
        }

        void set_dueno(Dueno _dueno) {
            dueno = _dueno;
        }

        // métodos
        float peso_por_edad() {
            return (peso / edad);
        }

    void imprime_datos() {
        cout << "Raza: " << raza << endl;
        cout << "Edad: " << edad << endl;
        cout << "Peso: " << peso << endl;
        cout << "Dueño: " << dueno.get_nombre() << endl;
    }
};

#endif