#include <iostream>
#include "Dibujo.h"
#include "Posicion.h"

using namespace std;

int main(){

    Dibujo miDibujo;

    Posicion pos = Posicion(12, 56);
    miDibujo.agregar_circulo(5, 90, "#FF0000", pos);

    Posicion pos2 = Posicion(15, 6);
    miDibujo.agregar_circulo(50, 9, "#FF0F000", pos2);

    Posicion pos_triangulo = Posicion();
    miDibujo.agregar_triangulo(5, 7, 10, 8, 0, "#FF0000", pos_triangulo);

    miDibujo.dibujar();

    return 0;
}