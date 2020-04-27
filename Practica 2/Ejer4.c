#include <stdio.h>
#include <stdlib.h>

/*Realiza un programa que dados dos números enteros 
compruebe si el primero es divisible por el segundo o viceversa.
*/

int main(){
    int n1,n2;
        printf("Introduce los numeros a evaluar\n");
            scanf("%i %i",&n1,&n2);
        if((n2%n1)){
            printf("El primero es divisible entre el 2\n");
        }
        if((n1%n2)){
            printf("El segundo es divisible entre el primero\n");
        }
        else{
            printf("Ningun numero es divisible entre ellos");
        }
            return 1;
}