#include <stdio.h>
#include <stdlib.h>
/*
Escribe una función que acepte una cadena de caracteres y determine si dicha cadena
es o no un palíndromo. Se dice que una cadena es un palíndromo si se puede leer igual de
izquierda a derecha que de derecha a izquierda, ignorando los espacios en blanco. 
*/
int pali(char *cadena);
void inversa(char * cadena);
void copia(char *cad,char *dest);
int main(){
    char cad[20];int res;
        printf("Now introduce the string \n");
            scanf("%s",cad);
        res=pali(cad);
        if(res==1){
            printf("Es un palindromo\n");
        }
        else
        {
            printf("no es palindromo\n");
        }
        
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
void copia(char *cad,char *dest){
    int i=0;
    for ( i = 0; i < sizeof(cad); i++)
    {
        dest[i]=cad[i];
    }
    
}
int pali(char *cadena){
    int i,cont=0;
    char aux[sizeof(cadena)];
    
        copia(cadena,aux);
        inversa(aux);
        for ( i = 0; i < sizeof(cadena); i++)
        {
            if(cadena[i]==aux[i]){
                cont++;
            }
        }
        if(cont==sizeof(cadena)){
            return 1;
        }
        else
        {
            return 0;
        }
        
}