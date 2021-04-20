#ifndef RECURSIVAS_H
#define RECURSIVAS_H

#include <stdlib.h>
#include <stdio.h>
/*
Diseñe una función recursiva que calcule la i-ésima cifra de un entero n. Implemente dicha función
en C.
*/
size_t ej_1(int n,int cifra,int buscada){
    if (cifra==0)
    {
        return buscada;
    }
    return ej_1(n=n/10,cifra-1,buscada=n%10);
} 

/*
Diseñe un algoritmo que localice de forma recursiva, en la misma pasada, el máximo y el mínimo
de un vector dado no vacío. Implemente dicha función en C.
    - Usamos array size como iterador del vector de bajo nivel
    - Max y min deben comenzar con el primer elemento del array
*/
int ej_2(int array_size, int *max, int min,int array[]){
    if (array_size<0)
    {
        return min;
    }
    if (*max < array[array_size])
    {
        *max = array[array_size];
    }

    if (min>array[array_size])
    {
        min = array[array_size];
    }

    return ej_2(array_size-1,max,min,array);
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