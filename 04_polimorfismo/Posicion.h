#ifndef POSICION_H
#define POSICION_H

#include <iostream>

using namespace std;

class Posicion{
    
    private:
        int x;
        int y;

    public:
        Posicion(){
            x = 0;
            y = 0;
        }

        Posicion(int _x, int _y){
            x = _x;
            y = _y;
        }

        int get_x(){
            return x;
        }

        int get_y(){
            return y;
        }

        void set_x(int _x){
            x = _x;
        }

        void set_y(int _y){
            y = _y;
        }

        void imprime_datos(){
            cout << "x: " << x << endl;
            cout << "y: " << y << endl;
        }
};

#endif