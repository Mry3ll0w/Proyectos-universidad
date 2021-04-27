#include <stdlib.h>
#include <stdio.h>

int ejercicio_6_practicas(int v[], int size, int result );
int main(){
    int V []={1,9,1,1,4,5,6,2};
    printf("%i\n",ejercicio_6_practicas(V,8,0)); 
    return 0;
}
/**
 * @brief Diseñe un algoritmo que calcule de forma recursiva la suma de todos los elementos de un vector A
 * de n enteros que cumplen la siguiente propiedad: 
 * 
 * @details 
 * Precondicion==> Recibe un vector de enteros v inicializado previamente
 * y su dimension como un entero size.
 * Aunque aunque seria mas optimo usar el tipo size_t para iterar de la libreria stdlib.h, 
 * necesaria para la ejecuion de la misma (debido a que nunca pude tener valores<0), mediante #include <stdlib.h>
 * Ademas recibe parametro entero result donde iremos almacenando la suma de los elementos que cumplan la condicion dada
 * 
 * Postcondicion==> Devuelve la suma de todos los elementos que cumplan las condiciones dadas (result)
 */
int ejercicio_6_practicas(int v[], int size, int result ){
    if ((size/2)-1<=1)
    {
        return result;
    }
    
    if(v[size]>v[size*2] && v[size]>v[(size*2)+1]){
            result+=v[size];
    }

    ejercicio_6_practicas(v,size-1,0);
}