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

/**
 * @brief 
 * 4. Dado un vector ordenado crecientemente A[1..n], siendo n ≥ 1, diseñe un algoritmo que 
 * calcule de forma recursiva la longitud de la escalera más larga, es decir, la longitud 
 * de la secuencia más larga de valores consecutivos que se encuentre en A. 
 * Implemente dicha función en C.
 * @details Recibe un vector ordenado de forma creciente inicializado
 * sea V [5]={2,1,1,4,5} y max_escalera=0=escalera_temp (valores iniciales)
 */
int ejercicio_4_practicas(int v[],int max_escalera, int escalera_temp,int size){
    if (size<2)
    {
        return max_escalera+1;//Ya que empieza en 0 (0+1+1)+1
    }
    if (v[size-1]==v[size-2])
    {
        escalera_temp++;
    }
    if (escalera_temp>max_escalera)
    {
        max_escalera=escalera_temp;
    }
    else{
        escalera_temp=0;
    }
    
    ejercicio_4_practicas(v, max_escalera, escalera_temp, size-1);
}

/**
 * @brief 
 * 5. Diseñe una función recursiva que determine si en un vector A de n enteros existen dos parejas
 * consecutivas de elementos tales que sus sumas sean idénticas. 
 * Implemente dicha función en C.
 * @details 
 * Precondicion==>Recibe v (sea int v[]={1,1,1,1,4,5,6,2}, un array de bajo de ejemplo), para iterar usamos el 
 * entero size>0, aunque seria mas optimo usar el tipo size_t para iterar de la libreria stdlib.h, 
 * necesaria para la ejecuion de la misma (debido a que nunca pude tener valores<0).
 * En el caso base tenemos que si el size del vector no es menor 
 * 
 */
#define true 1
#define false 0
typedef int bool;
bool ejercicio_5_practicas(int v[], int size){
    if (size<4)
    {
        return false;
    }
    if ((v[size-1]+v[size-2])==(v[size-3]+v[size-4]))
    {
        return true;
    }
    ejercicio_5_practicas(v,size-1);
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
#endif  