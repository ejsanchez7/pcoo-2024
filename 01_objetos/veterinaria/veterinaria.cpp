#include <iostream>
#include "Perro.h"
#include "Dueno.h"
#include "Direccion.h"

using namespace std;

int main() {
    // Crear objetos y asociarlos
    Direccion tec;
    Dueno erik = Dueno("Erik Sánchez", tec, "1234567890");
    Perro fiona = Perro("Mestizo", 6, 14, erik);

    // Uso de métodos
    cout << "Promedio de kg por año: " << fiona.peso_por_edad() << endl;
    cout << "Los datos del perro son: " << endl;
    fiona.imprime_datos();

    // Navegación en los objetos asociados para ejecutar sus métodos
    // (imprimir la dirección del dueño de fiona)
    cout << "Dirección del dueño: ";
    fiona.get_dueno().get_direccion().imprime_datos();
    cout << endl;

    return 0;
}