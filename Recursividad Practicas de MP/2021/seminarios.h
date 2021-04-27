#ifndef SEMINARIOS_H
#define SEMINARIOS_H
#include <stdio.h>
#include <stdlib.h>
/* EJERCICIO 1 seminario7
Dado un vector A de n enteros, diseñe una función recursiva que determine si dicho vector está ordenado
ascendentemente.
*/
size_t ej1_seminario7(int v[],size_t n){
    if (n<1)
    {
        return 1;//Es cierto
    }
    if(v[n]<v[n-1]){
        return 0;
    }

ej1_seminario7(v,n-1);
}
/*
Funcion recursiva que cumpla igualdad entre mucho texto de sumatorios
*/
int ej2_final_sum(int v[],int n, int alpha){
    if (n == alpha)
    {
        return 0;
    }
    
    return ej2_final_sum(v,n,alpha+1)+v[alpha];
}
int ej2_sem7(int v[], int n){
    return ej2_final_sum(v,n/2,1)==ej2_final_sum(v,n,((n+1)/2)+1);
}

/*
Se representa por conj(n, k) la cantidad de conjuntos diferentes de k elementos que pueden formarse a
partir de n elementos. Por ejemplo, conj(4, 3) = 4, ya que se pueden formar 4 posibles conjuntos de tres
elementos. Si los elementos fuesen A, B, C y D se generarían los siguientes conjuntos: ABC, ABD, ACD y
BCD. En general se cumple la relación: conj(n, k) = conj(n − 1, k) + conj(n − 1, k − 1).
Diseñe un algoirtmos que calcule conj(n, k) para cualesquiera valores de n, k ≥ 1.
*/
int ejercicio3_seminario7(int n, int k){
    if (n==1 || k==0 || n==k)
    {
        return 1;
    }
    return ejercicio3_seminario7(n-1,k)+ejercicio3_seminario7(n-1,k-1);
}

/**
 * @brief Un vector es un monte si su primera mitad es creciente, la segunda decreciente y el vector completo es
 * capicúa. Diseñe una función recursiva que determine si un vector A de n elementos es un monte.
 * Dividiremos la funcion en 2 ==> Obtendremos si es capicua en una funcion y otra el tema de creciente/ no creciente
 * Las pruebas las realizaremos con 1881 que cumple las caracteristicas
 */

//Comprueba que sea capicua, recibe el numero divido en un vector
int ej4_sem7_capicua(int v[],int i0,int in,int size){
    printf("%i %i\n",v[i0],v[in-1]);
    if (i0==size||in<1)
    {
        return 1;
    }
    if (v[i0]!=v[in-1])
    {
        return 0;
    }
    ej4_sem7_capicua(v,i0+1,in-1,size);
}

int ejercicio4_sem7_llamada(int v[],int size){
    //return ej4_sem7_capicua(v,0,size,size)==ej4_sem7_dec_cre(v,0,size/2,size);
}

#endif