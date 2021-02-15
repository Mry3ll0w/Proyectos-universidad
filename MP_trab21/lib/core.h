#ifndef core_h
#define core_h

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//leo el archivo siempre y despues ya vemos q paza
FILE *db;
typedef struct{
    char code[5];//de maximo 5 digitos
    char *nombre;//maximo 20
    char estado; //BOOL T o F
}coso;
int n_total_obj=2;
char buffer[30];
void assing_buffer(char buffer[30],coso ej1){
    int token=0,slash_placer[2],cont=0,j=0;
    assert(db!=NULL);//si no se lee correctamente el fichero sal
    //terminar esta mierda
    
        for (int j = 0; j < 30; j++)
        {
            if (buffer[j]=='/'){
                slash_placer[token]=cont;
                token+=1;
            }
            cont++;
        }
        
        ej1.nombre=(char*)malloc(slash_placer[0]*sizeof(int));
        
       for (int i = 0; i < 33; i++)
       {
           if (i < slash_placer[0]){
               ej1.nombre[i]=buffer[i];
           }
           if(i>slash_placer[0] && i<(slash_placer[1])&&j<5){
               
               ej1.code[j]=buffer[i];
               j++;
           } 

       }
       ej1.estado=buffer[slash_placer[1]+1];
        
    

    
}
void list_all(){
    coso ej[2];
    db=fopen("data/database.txt","r");
    assert(db!=NULL);//si no se lee correctamente el fichero sal
    for (int i = 0; i < n_total_obj; i++)
    {
        fscanf(db,"%s",buffer);
        assing_buffer(buffer,ej[i]);
    }
    printf("nombre=%s\n",ej[0].nombre);
    printf("codigo=%s\n",ej[0].code);
    printf("estado=%c\n\n",ej[0].estado);
    
    printf("nombre=%s\n",ej[1].nombre);
    printf("codigo=%s\n",ej[1].code);
    printf("estado=%c\n",ej[1].estado);
    
}


#endif