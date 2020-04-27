#include <stdio.h>
#include <stdlib.h>

/*
6.- Realiza un programa que calcule la intensidad que circula por una resistencia dados
R y V. I=V/R suponiendo que la función main del programa sea:
main()
{
float res, vol, intensidad;
obtener_valores(&res,&vol);
intensidad= calcular(res, vol);
imprimir_respuesta(intensidad);
return 0;
}

*/
void obtener_valores(float *res, float *v);
float calcular (float res,float v);
void imprimir_respuesta(float intensidad);
int main(){
    float res, vol, intensidad;
        obtener_valores(&res,&vol);
        intensidad= calcular(res, vol);
        imprimir_respuesta(intensidad);
return 0;
}

void obtener_valores(float *res, float *v){
    printf("Introudce por favor los valores\n");
        scanf("%f %f",v,res);
}
float calcular (float res,float v){
        
    return (v/res);
}
void imprimir_respuesta(float intensidad){
        printf("La intensidad es: %.3f\n",intensidad);

}