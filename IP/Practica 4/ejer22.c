#include <stdio.h>
#include <stdlib.h>

/*
Escribe una void inversa(char * cadena) que invierta la cadena de caracteres cadena. 
*/
void inversa(char * cadena);
int main(){
    char cad[20];
        printf("Introduce the string u want to reverse\n");
            scanf("%s",cad);
            inversa(cad);
        printf("The reversed string is : %s\n",cad);
    return 0;

}

void inversa(char * cadena){
        int i=0,j=0;char aux;
        
        while (cadena[j]!='\0')//We use this to count the characters in th string
        {
            j++;
        }
        int size=j;
       for ( i = 0, j=j-1; i<(size/2) ; i++,j--)
       {
            aux=cadena[i];
            cadena[i]=cadena[j];
            cadena[j]=aux;
       }
       
    
}