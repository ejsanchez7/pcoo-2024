#include<iostream>
// Importar la clase Arbol
#include "Arbol.h"

using namespace std;

int main() {

    Arbol abedul;
    abedul.set_especie("Abedul");
    abedul.imprime_datos();
    cout << "---------------" << endl;
    Arbol pino = Arbol("pino", 6, 20);
    pino.imprime_datos();
    cout << "Ejemplo get: " << pino.get_especie() << endl;
    cout << "---------------" << endl;
    abedul.crece(7);
    pino.crece(20);
    cout << "---------------" << endl;
    abedul.imprime_datos();
    cout << "---------------" << endl;
    pino.imprime_datos();

    return 0;
}