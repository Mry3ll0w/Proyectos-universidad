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
    char nombre[20];
    int estado; //BOOL 1=T 0=F
}coso;

void list_all(){
    char lect;int token=0,i=0,j=0;
    coso ej1;
    db = fopen("data/database.txt","r");
    assert(db!=NULL);//si no se lee correctamente el fichero sal
    //terminar esta mierda
    while((lect=fgetc(db))!=EOF){
        //printf("%c",lect);
        PASAR A LEER LINEA A LINEA ES MAS SENCILLO;
        if (lect=='/'){
            token++;
        }
        //COLOCAR SWITCH EN FUNCION APARTE PARA USAR LA MISMA PARA TODAS LAS LECTURAS DONDE SE DEFINE EL TOKEN ETC
        if(lect!='/'){
            switch (token)
            {
                case 0:
                    ej1.nombre[i]=lect;
                    i++;
                    break;

                case 1:
                    ej1.code[j]=lect;
                    j++;
                    break;

                case 2:
                    ej1.estado=atoi(&lect);
                    break;

                default:
                    break;
            }
        }
        
    }

    printf("%s\n",ej1.nombre);
    printf("%s\n",ej1.code);
    printf("%d\n",ej1.estado);
}



#endif