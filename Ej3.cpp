#include <iostream>
#include "Arbol/ArbolBinario.h"

using namespace std;

int main(int argc, char const *argv[])
{
  ArbolBinario<int> gimnasio;
  bool exit = false;

  while (!exit)
  {
    int option;

    cout << "Bienvenido al sistema de control de socios del gimnasio, que desea hacer:" << endl;
    cout << "1. Ingresar un nuevo socio" << endl;
    cout << "2. Eliminar un socio" << endl;
    cout << "3. Verificar si un socio está en el sistema" << endl;
    cout << "4. Imprimir lista de socios" << endl;
    cout << "5. Salir" << endl;

    cin >> option;

    switch (option)
    {
    case 1:
    {
      int id;
      cout << "Ingrese el ID del socio: ";
      cin >> id;
      gimnasio.put(id);
      cout << "Socio ingresado correctamente" << endl;
      break;
    }
    case 2:
    {
      int id;
      cout << "Ingrese el ID del socio a eliminar: ";
      cin >> id;
      gimnasio.remove(id);
      cout << "Socio eliminado correctamente" << endl;
      break;
    }

    case 3:
    {
      int id;
      cout << "Ingrese el ID del socio a verificar: ";
      cin >> id;
      try
      {
        int socio = gimnasio.search(id);
        cout << "El socio con ID " << id << " está en el gimnasio" << endl;
      }
      catch (int e)
      {
        if (e == 404)
        {
          cout << "El socio no se encuentra en el gimnasio" << endl;
        }
      }
      break;
    }
    case 4:
    {
      cout << "Lista de socios en el gimnasio" << endl;
      gimnasio.print();
      break;
    }
    case 5:
    {
      exit = true;
      break;
    }
    default:
      cout << "Opción no válida" << endl;
      break;
    }
  }

  return 0;
}
