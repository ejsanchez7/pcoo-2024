#include <iostream>
#include "Circulo.h"
#include "Posicion.h"

using namespace std;

int main(){

    Posicion pos = Posicion(12, 56);
    Circulo miCirculo = Circulo(5, 90, "#FF0000", pos);

    miCirculo.imprime_datos();

    return 0;
}