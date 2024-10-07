#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

void Inscribir_socio(ArbolBinario<int> &sistema_gimnasio){
    int id_socio;
    cout << "Ingrese el ID del socio: ";
    cin >> id_socio;
    sistema_gimnasio.put(id_socio);
}


void Eliminar_socio(ArbolBinario<int> &sistema_gimnasio){
    int id_socio;
    cout << "Ingrese el ID del socio: ";
    cin >> id_socio;
    if (sistema_gimnasio.search(id_socio)){
        sistema_gimnasio.remove(id_socio);
        cout << "Socio eliminado correctamente" << endl;
    } else {
        cout << "El socio no se encuentra inscripto" << endl;
    }
}

void menu(ArbolBinario<int> &sistema_gimnasio){
    int opcion;
    do {
        cout << "1. Inscribir socio" << endl;
        cout << "2. Eliminar socio" << endl;
        cout << "3. Buscar socio" << endl;
        cout << "4. Listar socios" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                Inscribir_socio(sistema_gimnasio);
                break;
            case 2:
                Eliminar_socio(sistema_gimnasio);
                break;
            case 3:
                int id_socio;
                cout << "Ingrese el ID del socio: ";
                cin >> id_socio;
                if (sistema_gimnasio.search(id_socio))
                    cout << "El socio se encuentra inscripto" << endl;
                else
                    cout << "El socio no se encuentra inscripto" << endl;
                break;
            case 4:
                cout << "Listado de socios:" << endl;
                sistema_gimnasio.print();
                break;
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (opcion != 5);
}


int main() {
    ArbolBinario<int> sistema_gimnasio;
    menu(sistema_gimnasio);

    return 0;
}
