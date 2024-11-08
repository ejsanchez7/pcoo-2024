// Incluir librería para leer/escribir en consola
#include <iostream>

/*
FUNCIONES.CPP
Ejemplos de funciones en C++
*/

// Indiciar que usará el namespace std
using namespace std;

void par_impar(int num) {
    if(num % 2 == 0) {
        cout << "El número: " << num << " es par." << endl;
    }
    else {
        cout << "El número: " << num << " es impar." << endl;
    }
}


int main() {

    int num;

    cout << "Escribe un número: ";
    cin >> num;

    par_impar(num);

    return 0;
}