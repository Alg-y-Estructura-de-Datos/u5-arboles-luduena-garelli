#include <iostream>
#include "Arbol/ArbolBinario.h"

using namespace std;

int main(int argc, char const *argv[])
{
  ArbolBinario<int> tienda;

  tienda.put(4001);
  tienda.put(2002);
  tienda.put(6003);
  tienda.put(1500);
  tienda.put(3500);
  tienda.put(5000);
  tienda.put(7000);

  /*: Un cliente compró los productos con códigos 2002 y 6003, así que
  elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
  inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
  en el sistema*/

  tienda.print();

  tienda.remove(2002);
  tienda.remove(6003);

  tienda.put(2500);

  tienda.print();

  try
  {
    int producto = tienda.search(4001);
    cout << "El producto con código 4001 está en el inventario: " << producto << endl;
  }
  catch (int e)
  {
    if (e == 404)
    {
      cout << "El producto no se encuentra en el inventario" << endl;
    }
  }

  return 0;
}
