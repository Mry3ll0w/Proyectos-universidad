#include <stdio.h>
#include <stdlib.h>

/*
Escribe una función void concatena(char * c1,char *c2) que añada la cadena c1 al
final de la cadena c2, sin utilizar el fichero de cabecera <string.h>
*/
void concatena(char * c1,char *c2);
int main(){
    char a[20],b[20];
        printf("Introduce the string\n");
                scanf("%s",a);
        printf("Introduce la cadena a concatenar\n");
            scanf("%s",b);
       concatena(a,b);
       printf("A concatenada: %s\n",a);
        
    return 0; 
}
void concatena(char * c1,char *c2){
        int i=0,j=0;
        while (c1[i]!='\0')
        {
            i++;
        }
        printf("Valor de I=%i\n",i);

        while(c2[j]!='\0'){
                c1[i]=c2[j];
                i++;
                j++;
        }

         

}