#include <iostream>
#include "Figura.h"
#include "Posicion.h"

using namespace std;

int main(){

    Posicion pos = Posicion(12, 56);
    Figura fig = Figura(90, "#FF0000", pos);

    fig.imprime_datos();

    return 0;
}