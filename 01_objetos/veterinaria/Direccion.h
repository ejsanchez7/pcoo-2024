#ifndef DIRECCION_H
#define DIRECCION_H

#include <iostream>

using namespace std;

class Direccion {
    private:
        string calle;
        int numero;
        int cp;
        string colonia;
        string ciudad;

    public:
        // Constructor por omisión
        Direccion() {
            calle = "Epigmenio González";
            numero = 100;
            cp = 76130;
            colonia = "Desarrollo San Pablo";
            ciudad = "Querétaro";
        }

        // Getters
        string get_calle() {
            return calle;
        }

        int get_numero() {
            return numero;
        }

        int get_cp() {
            return cp;
        }

        string get_colonia() {
            return colonia;
        }

        string get_ciudad() {
            return ciudad;
        }

        // Setters
        void set_calle(string _calle) {
            calle = _calle;
        }

        void set_numero(int _numero) {
            numero = _numero;
        }

        void set_cp(int _cp) {
            cp = _cp;
        }

        void set_colonia(string _colonia) {
            colonia = _colonia;
        }

        void set_ciudad(string _ciudad) {
            ciudad = _ciudad;
        }

        // Métodos
        void imprime_datos() {
            cout << calle << " " << numero << " " << colonia << ", " << ciudad; 
        }
};

#endif