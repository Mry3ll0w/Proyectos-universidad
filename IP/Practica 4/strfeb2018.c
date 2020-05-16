#include <stdio.h>
#include <stdlib.h>

/*
 600 alumnos {
     DNI
     NOMBREAP
     NOMBRE CURSO
     CURSO SUP[10]{
         AÑO 
         PRECIO
     }
     CURSO INF [6]{
         AÑO 
         PRECIO
     }

 }
*/
typedef struct 
{
    int anno;
    float precio;
}cur;
typedef struct 
{
    char DNI[9],nomap[20],ncurso[20];
    cur cursup[10]; //Max asig nuevas 
    cur curinf [6]; //Max asig repetidas
}al;


int main(){
    al *alum;
    alum=(al *)malloc(600*sizeof(al));
        scanf("%s",alum[3].curinf->anno);

}