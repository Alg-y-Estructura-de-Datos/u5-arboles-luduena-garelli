#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

void menu(ArbolBinario<int> &inventario) {
    int opcion,id_paquete;
    do {
        cout << "1. Agregar Paquete" << endl;
        cout << "2. Entrega de Paquete" << endl;
        cout << "3. Buscar Paquete" << endl;
        cout << "4. Listar Paquetes" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese el ID del paquete: ";
                cin >> id_paquete;
                inventario.put(id_paquete);
                break;
            case 2:
                cout << "Ingrese el ID del paquete: ";
                cin >> id_paquete;
                inventario.remove(id_paquete);
                break;
            case 3:
                cout << "Ingrese el ID del paquete: ";
                cin >> id_paquete;
                if (inventario.search(id_paquete))
                    cout << "El paquete sigue en transito" << endl;
                else
                    cout << "EL paquete ya fue entregado" << endl;
                break;
            case 4:
                cout << "Listado de paquetes:" << endl;
                inventario.print();
                break;

        }
    } while (opcion != 5);
}


int main(){
    ArbolBinario<int> inventario;

    inventario.put(1001);
    inventario.put(2004);
    inventario.put(3003);
    inventario.put(5002);
    inventario.put(4500);
    inventario.put(7005);
    inventario.put(8006);
    menu(inventario);





    return 0;
}