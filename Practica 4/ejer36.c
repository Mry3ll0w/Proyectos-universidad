#include <stdio.h>
#include <stdlib.h>
/*
Escribe un programa que reciba el nombre de un fichero de texto ya creado y permita
escribir en él varias líneas.
*/
int main(){
FILE *fp,*fp2;char cad[20];
    fp=fopen("fich.txt","r+");
    fp2=fopen("fich2.txt","a");
        if(fp==NULL){
            printf("Not able to create/open the file\n");
        }
        else{
            while (feof(fp) == 0)
            {
                fscanf(fp,"%s",cad);
                printf("%s\n",cad);
                fprintf(fp2,"%s",cad);
                fprintf(fp2,"%s","\n");
            }
        }    
    fclose(fp);fclose(fp2);
    return 0;
}