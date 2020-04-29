#include <stdio.h>
#include <stdlib.h>
/*
- Escribe un programa que cree un fichero de texto que no existe y almacene
información en él.
*/
int main(){
    FILE *fp;char cad[20];
    fp=fopen("fich.txt","w+");
        if(fp==NULL){
            printf("Not able to create/open the file\n");
        }
        else{
             printf("Introduce the thing u wanna writeon the file\n");
                 scanf("%s",cad);
                fprintf(fp,"%s",cad);
                fclose(fp);
        }
}