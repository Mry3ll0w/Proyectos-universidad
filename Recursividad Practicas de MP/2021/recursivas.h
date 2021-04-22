#ifndef RECURSIVAS_H
#define RECURSIVAS_H

#include <stdlib.h>
#include <stdio.h>
/*
Diseñe una función recursiva que calcule la i-ésima cifra de un entero n. Implemente dicha función
en C.
*/
size_t ej_1(int n,int cifra,int buscada){
    if (cifra==0||n<=0)
    {
        return buscada;
    }
    printf("n=%i buscada=%i\n",n,buscada);// 376 /10 = 37 b=6 c=3-1 // 37 %10 = b(7) c=3-2 n=3 // c=0 n=0 3%10=3==> buscada=3
    return ej_1(n=n/10,cifra-1,buscada=n%10);// 37 % 10==> 7
} 
///BONUS cifras de un numero 11234/10 1123 112 11 1 0
size_t cifras_numero(int n){
    if (n<=0)
    {
        return 0;
    }
    return 1 + cifras_numero(n/10); 
}

///

/*
Diseñe un algoritmo que localice de forma recursiva, en la misma pasada, el máximo y el mínimo
de un vector dado no vacío. Implemente dicha función en C.
    - Usamos array size como iterador del vector de bajo nivel
    - Max y min deben comenzar con el primer elemento del array
*/

int ejercicio_2(int s, int max, int *min,int v[]){
    if (s<0)
    {
        return max;
    }

    if (max < v[s]) 
    {
        max = v[s]; 
    }

    if (*min>v[s])
    {
        *min = v[s];
    }

    return ejercicio_2(s-1,max,min,v);
}

/**
 * @brief 
 *   Diseñe un algoritmo que calcule de forma recursiva el producto escalar de dos vectores de n
 *   elementos enteros, n ≥ 0. Implemente dicha función en C.
 * @pre
 *    -si el size de los arrays es != entonces sale ya que no se puede realizar el producto escalar  
 * @return int producto escalar de los arrays
 */
int ej3(int arr_size, int v1[] ,int v2[]){
    if (arr_size < 1)
    {
        return 0;
    }
    return (v1[arr_size-1]*v2[arr_size-1])+ej3(arr_size-=1,v1,v2);
}

#endif  