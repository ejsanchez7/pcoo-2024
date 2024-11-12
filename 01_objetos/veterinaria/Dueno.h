#ifndef DUENO_H
#define DUENO_H

#include <iostream>
#include <string>
#include "Direccion.h"

using namespace std;

/*
DUEÑO
    nombre
    direccion
    telefono
*/

class Dueno {

    private:
        string nombre;
        Direccion direccion;
        string telefono;

    public:
        // Constructor por omisión
        Dueno() {
            nombre = "";
            telefono = "";
        }
        // Constructor por parámetros
        Dueno(string _nombre, Direccion _direccion, string _telefono) {
            nombre = _nombre;
            direccion = _direccion;
            telefono = _telefono;
        }

        // Getters
        string get_nombre() {
            return nombre;
        }

        Direccion get_direccion() {
            return direccion;
        }

        string get_telefono() {
            return telefono;
        }

        // Setters
        void set_nombre(string _nombre) {
            nombre = _nombre;
        }

        void set_direccion(Direccion _direccion) {
            direccion = _direccion;
        }

        void set_telefono(string _telefono) {
            telefono = _telefono;
        }
};

#endif