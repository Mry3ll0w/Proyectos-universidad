#include <stdio.h>
#include <stdlib.h>
/*
Escribe un programa que acepte tres números, horas, minutos
y segundos y devuelva la hora que será dentro de un segundo, 
controlando que sea una hora correcta.
*/
int main(){
    int h,m,s;
        printf("Introduceme los numero que deseas operar\n");
            scanf("%i %i %i",&h,&m,&s);
        if(h>24||m>59||s>59){
            printf("Formato incorrecto\n");
        }
        else{
            s=s+1;
            if(s>59){
                s=0;
                m=m+1;
                if(m>59){
                    m=0;
                    h=h+1;
                }
                if(h>23){
                    h=0;
                }
            }
        }
        printf("La hora dentro de un segundo sera:\n \t %i:%i''%i",h,m,s);
            return 0;


}