#include <iostream>
#include "Arbol/ArbolBinario.h"

using namespace std;

int main(int argc, char const *argv[])
{
  ArbolBinario<int> biblioteca;

  biblioteca.put(101);
  biblioteca.put(52);
  biblioteca.put(198);
  biblioteca.put(36);
  biblioteca.put(75);
  biblioteca.put(150);
  biblioteca.put(200);

  try
  {
    int libro = biblioteca.search(75);
    cout << "El libro con ID 75 está en la biblioteca: " << libro << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << "El libro no se encuentra en la biblioteca" << endl;
    }
  }

  biblioteca.remove(52);
  cout << "Se ha eliminado el libro" << endl;

  cout << "Estructura de la biblioteca despues de elminiar el libro" << endl;
  biblioteca.print();

  return 0;
}
