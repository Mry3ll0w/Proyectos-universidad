#include <stdio.h>
#include <stdlib.h>
/*
Realiza una función longitud que devuelva la longitud de una cadena de caracteres sin
utilizar el fichero de cabecera <string.h>
*/
int main(){
    char *cad;
    int i=0,cont=0,size;
            printf("Introduce the string\n");
                scanf("%s",cad);
               
            while (cad[i] !='\0')
            {
                i++;
            }
            printf("The size of the cad is %i\n",i);
            

}