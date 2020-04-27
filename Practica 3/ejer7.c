#include <stdio.h>
#include <stdlib.h>

/*
Escribe un programa en C que escriba la suma de los n términos de la serie
armónica, utilizando para ello, una función que reciba como parámetro el valor de n y
devuelva la suma de la serie:
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n
*/
float s_armonica(int n);

int main (){
    int n;
        printf("Introduce el valor de n\n");
            scanf("%d",&n);
        printf("El resultado de la suma de la serie es: %.3f\n",s_armonica(n));
                return 0;
}
//Cabecera float s_armonica(int n)
//Precondicion ==> Recibe un entero n inicializado
//Postocodicion ==> devuelve la suma de todos los elementos de la serie armónica
float s_armonica(int n){
       float serie=0.0;
       while(n>0){
            float r= (float) 1/n;
            serie=serie+r;
            n-=1;
       }
            return serie;
}
