#include <stdio.h>
#include <stdlib.h>

/*
Escribe una función int primer_caracter (char cadena1, char cadena2) que devuelva
como resultado la primera posición de cadena1 en que aparezca cualquier carácter de
cadena2 o –1 si cadena1 no contiene ningún carácter de cadena2.
*/
int primer_caracter (char *cadena1, char *cadena2);

int main (){
    char cad1[20],cad2[20];int pos;
        printf("Introduce the first string \n");
            scanf("%s",cad1);
        printf("Introduce the second string\n");
            scanf("%s",cad2);
        pos=primer_caracter(cad1,cad2);
        printf("The character %c of the second string appears in the %i pos\n",cad1[pos],pos+1);

}

int primer_caracter (char *cadena1, char *cadena2){
    int i=0,j=0,pos;

        for ( i = 0; i <= sizeof(cadena1); i++)
        {
            for ( j = 0; j < sizeof(cadena2); j++)
            {
                if (cadena1[j]==cadena2[i])
                {
                    printf("%i\n",j);
                    return j;
                }
                
            }
            
        }
    
}