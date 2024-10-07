#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> inventario;

    inventario.put(4001);
    inventario.put(2002);
    inventario.put(6003);
    inventario.put(1500);
    inventario.put(3500);
    inventario.put(5000);
    inventario.put(7000);

    cout << "Inventario original:" << endl;
    inventario.print();

    cout << "Se vendio el producto con codigo 2002" << endl;
    inventario.remove(2002);
    cout << "Se vendio el producto con codigo 6003" << endl;
    inventario.remove(6003);
    cout << "Ingreso un nuevo producto con codigo 2500" << endl;
    inventario.put(2500);
    inventario.print();
    if(inventario.search(4001))
        cout << "El producto con codigo 4001 se encuentra en el inventario" << endl;
    else
        cout << "El producto con codigo 4001 no se encuentra en el inventario" << endl;



    return 0;
}
