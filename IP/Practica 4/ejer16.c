#include <stdio.h>
#include <stdlib.h>

/*
Un cuadrado latino de orden N es una matriz cuadrada que en su primera fila contiene
los N primeros números naturales y en cada una de las siguientes N-1 filas contiene la
rotación de la fila anterior un lugar a la derecha. Realiza un programa que reciba como
parámetro la dimensión del cuadrado y genere la matriz correspondiente a su cuadrado
latino

*/

int main(){
    int n;int *a;
        printf("Introduce the size of the arrays\n");
            scanf("%i",&n);
            
    
    //elements of the array
        for ( int i = 0; i < n; i++)
        {
          a[i]=i+1;
        }
    //Function  
        for (int i = 0; i <n ; i++)
        {
            printf("%i ",a[i]);
            
        }
        
        

}