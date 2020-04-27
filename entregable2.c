#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Programa que comprueba si dos numeros son amigos (que la suma de sus divisores es la misma).
void amigos(int n1, int n2);
int s_div(int n);
int main (){
    int n1,n2;
            printf("Introduce los numeros que deseas imprimir\n");
                scanf("%i %i ",&n1,&n2);
            //amigos(n1,n2);
            s_div(n1);
        return 0;
}

void amigos (int n1, int n2){
    if(s_div(n1)==s_div(n2)){
        printf("Los numeros son amigos\n");
    }
    else
    {
        printf("Los numeros no son amigos \n");
    }
    
}
int s_div(int n){
    int sum=0;
    int mitad=round(n/2);
    for(int i=1;i<mitad;i++){
        printf("VALOR DE I %i\n",i);
        if(n%i){
            sum=sum+i;
        }
    }
    printf("Valor sum %i\n",sum);

            return sum;
}