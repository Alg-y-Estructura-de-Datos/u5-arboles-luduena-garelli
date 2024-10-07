#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;


int main() {
    ArbolBinario<int> datos;

    datos.put(101);
    datos.put(52);
    datos.put(198);
    datos.put(36);
    datos.put(75);
    datos.put(150);
    datos.put(200);

    cout << "arbol original:" << endl;
    datos.print();

    if(datos.search(75))
        cout << "El valor 75 se encuentra en el arbol" << endl;
    else
        cout << "El valor 75 no se encuentra en el arbol" << endl;

    cout << "se presto el libro con el valor 52" << endl;
    datos.remove(52);

    cout << "arrbol actual: " << endl;
    datos.print();






    return 0;
}
