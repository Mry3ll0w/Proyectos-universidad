#include <stdio.h>
#include <stdlib.h>   
#include <string.h>
/*
Implementa una función void comprimir (char cadena1, char cadena2) que elimine
todo carácter de cadena1 que exista en cadena2.
*/
void comprimir (char *cadena1, char *cadena2);
int main(){
    char cad1[20],cad2[20];
        printf("Introduce the first string\n");
            scanf("%s",cad1);
        printf("Introduce the second string\n");
            scanf("%s",cad2);
        comprimir(cad1,cad2);    
        printf("String.rar=%s\n",cad1);
    return 0;
}

void comprimir (char *cadena1, char *cadena2){
    int i=0,j=0;
    char aux[strlen(cadena1)];
    for ( i = 0; i <= (strlen(cadena1)); i++)
    {
        if (cadena1[i]!=cadena2[i])
        {
            aux[j]=cadena1[i];
            j++;
        } 
    }
    //bucle para vaciado de la cadena1
    for ( i = 0; i <= sizeof(cadena1); i++)
    {
        cadena1[i]='\0';
    }
    //bucle copiado de aux(cadena 1 compresa)
    for ( i = 0; i <=sizeof(aux); i++)
    {
        cadena1[i]=aux[i];
    }
}