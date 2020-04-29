#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
    Write a C program to convert a given integer (in seconds) 
    to hours, minutes and seconds.
*/
        
        int aux1,aux,num;
        aux1=1;

        printf("Introdcue el numero en segundos");
        scanf("%i",&num);
        while (aux>0){
               aux=num/aux1;
               printf("Valor de aux= %i\n",aux);
                if(aux1==60){
                    printf("El numero en minutos es:%i\n",aux);
                }
                if(aux1==3600){printf("El numero en horas es: %i\n",aux);}
                aux1=aux1*60;
        }

        

    return 0;
}