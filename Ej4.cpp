#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main(){

    ArbolBinario<int> reservas;
    reservas.put(15);
    reservas.put(10);
    reservas.put(20);
    reservas.put(5);
    reservas.put(12);
    reservas.put(18);
    reservas.put(25);
    cout << "Arbol original:" << endl;
    reservas.print();

    cout << "Mesa 10 y 20 canceladas" << endl;
    reservas.remove(10);
    reservas.remove(20);
    cout << "Reserva mesa 13" << endl;
    reservas.put(13);
    if(reservas.search(13))
        cout << "La mesa 13 se encuentra reservada" << endl;
    else
        cout << "La mesa 13 no se encuentra reservada" << endl;

    cout << "Arbol actual:" << endl;
    reservas.print();



    return 0;
}