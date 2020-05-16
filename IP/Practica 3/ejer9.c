#include <stdio.h>
#include <stdlib.h>
/*
Realiza  un  programa  para  calcular  el  coeficiente  del  binomio  utilizando  
dos funciones. Una de las funciones deberá recibir los valores de n  y k  
como parámetros  y devolverá  el  valor  del  binomio.  
Para  ello,  deberá  hacer  uso  de  la  función  factorial  que devolverá el 
valor del factorial a través de un puntero (sin usar la sentencia return)
*/

void factorial(int p, long int *res);
float binomio (long int factn, long int factk, long int factnk,int n, int k, int);

int main(){
    int n,k;
    long int fn=1,fk=1,fnk=1;
    

        printf("Introduce n y k\n");
            scanf("%i %i",&n,&k);
        printf("El resultado %.3f\n",binomio(fn,fk,fnk,n,k,n-k));
}
void factorial(int p, long int *res){
    while (p>1){
        *res=*res*p;
        p-=1;
    }
}
float binomio (long int factn, long int factk, long int factnk,int n, int k , int nk){
        
        factorial(n,&factn);
        factorial(k,&factk);
        factorial(n-k,&factnk);
    return ((factn)/(factk*factnk));
}