
/*
Realiza un programa que copie un el contenido de un fichero de texto existente en otro
y devuelva el número de caracteres, palabras y líneas que contiene el mismo.
*/
#include <stdio.h>
#include <stdlib.h>
int main (){
 FILE *fp,*fp2;char cad[20];int ccont=0,lcont=0;
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
            char c=fgetc(fp);
            while (c!=EOF)
            {
                printf("ENTRO WHILE\n");
                ccont++;
                if (c=='\n')
                {
                    lcont++;
                }
            }
            printf("The number of characters=%i\n",ccont);
            printf("The number of lines is:%i\n",lcont);
        }    
    fclose(fp);
    return 0;
}
