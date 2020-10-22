#include <iostream>
#include <string.h>
#include <algorithm>
//Creditos a Jesus Lagares Galan 
//Siguelo en instagram @jesuslagares_ !!!! 


using namespace std;

// Algoritmo de inserción
void ordInser(int *v, int n)
{
  int i, j, aux;

  for (i = 1; i < n; ++i)
  {
    aux = v[i];
    j = i - 1;

    while ((v[j] > aux) && j >= 0 )
    {
      v[j+1] = v[j];
      j--;
    }

    v[j+1] = aux;
  }
}

// Función para ver si el vector está ordenado
bool prueba_ordena(int e[], int s[], unsigned n) // Damos una permutación, un vector ordenado y el tamaño
{
  int v[n], i;

  for(i = 0; i < n; ++i) // Hacemos una copia del vector mostrándolo por pantalla
  {
    v[i] = e[i];
  }
  cout << endl;

  ordInser(v, n); // Lo ordenamos 

  return(memcmp(v, s, sizeof s) == 0); // Comparamos nuestro vector "ordeando" con el realmente ordenado
  //que es memcmp?
}

int main(int argc, char const *argv[])
{
  int n = 9;
  int i;
  int v[n]; // Damos un vector
  int w[n]; // Vector ordenado

  for(i = 1; i <= n; ++i)
  {
    v[i-1] = i-1; // Rellenamos el vector

    memcpy(w, v, sizeof v); // Hacemos una copia del vector ordenado y el dado

    do
    {
      if(!prueba_ordena(v, w, i)) // Si el booleano es false => No están ordenados
      {
        cout << "ERROR. \a" << endl; // Da error 
        return 1;
      }
    }
    while(next_permutation(v, v + i)); // Siguiente permutación
  }

  return 0;
}
