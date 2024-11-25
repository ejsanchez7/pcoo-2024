#include <iostream>
#include "Dibujo.h"
#include "Posicion.h"

using namespace std;


void agregar_circulo(Dibujo* dibujo, int x, int y, float angulo, string color){
    
    Posicion posicion = Posicion(x, y);
    float radio;

    cout << "Escribe el radio en centímetros: ";
    cin >> radio;

    dibujo->agregar_circulo(radio, angulo, color, posicion);

}

void agregar_triangulo(Dibujo* dibujo, int x, int y, float angulo, string color){

    Posicion posicion = Posicion(x, y);
    float base, lado_a, lado_b, altura;

    cout << "Escribe el tamaño de la base en centímetros: ";
    cin >> base;
    cout << "Escribe el tamaño del segundo lado en centímetros: ";
    cin >> lado_a;
    cout << "Escribe el tamaño del tercer lado en centímetros: ";
    cin >> lado_b;
    cout << "Escribe el tamaño de la altura en centímetros: ";
    cin >> altura;

    dibujo->agregar_triangulo(base, lado_a, lado_b, altura, angulo, color, posicion);

}

void agregar_figura(Dibujo* dibujo, int tipo){
    
    int x, y;
    float angulo;
    string color;

    cout << "Escribe la posición en x: ";
    cin >> x;
    cout << "Escribe la posición en y: ";
    cin >> y;

    cout << "Escribe el ángulo: ";
    cin >> angulo;

    cout << "Escribe en color en hexadecimal: ";
    cin >> color;

    switch(tipo){
        case 1:
            agregar_circulo(dibujo, x, y, angulo, color);
            break;
        case 2:
            agregar_triangulo(dibujo, x, y, angulo, color);
            break;
        default:
            cout << "Esa figura no existe" << endl;
            break;
    }

}

void menu_figuras(Dibujo* dibujo){

    int opcion;
    bool valida = true;

    cout << "Selecciona la figura que quieres añadir:" << endl;
    cout << "\t1.- Círculo." << endl;
    cout << "\t2.- Triángulo." << endl;
    cout << "Opción --> ";
    cin >> opcion;

    switch(opcion){
    case 1:
        cout << "**** Círculo ****" << endl;
        break;
    case 2:
        cout << "**** Triángulo ****" << endl;    
        break;
    default:
        cout << "Esa figura no existe." << endl;
        valida = false;
        break;
    }

    if(valida){
        agregar_figura(dibujo, opcion);
    }

}

int main(){

    Dibujo miDibujo;
    int opcion = 0;

    do{
        cout << "Selecciona la operación a realizar: " << endl;
        cout << "\t1.- Añadir figura." << endl;
        cout << "\t2.- Dibujar." << endl;
        cout << "\t3.- Listar figuras." << endl;
        cout << "\t0.- Salir." << endl;
        cout << "Opción --> ";
        cin >> opcion;

        switch(opcion){
            case 1:
                menu_figuras(&miDibujo);
                break;
            case 2:
                miDibujo.dibujar();
                break;
            case 3:
                miDibujo.imprime_datos();
                break;
            case 0:
                cout << "Adios!" << endl;
                break;
            default:
                cout << "Esa no es una opción, intenta de nuevo." << endl;
        }

    cout << "============================" << endl;

    }while(opcion != 0);
    
    return 0;
}