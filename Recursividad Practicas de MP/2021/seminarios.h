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

#endif