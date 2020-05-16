#include <stdio.h>
#include <stdlib.h>

//funcion que calcula la potencia de x numero
void potencia(int e, int *n);
int main(){
    int n, el;
            printf("Introduce el valor del numero al cual quieres elevar\n A continuacion su exponente\n");
                scanf("%i %i",&n,&el);
                potencia(el,&n);
            printf("El resultado es %i\n",n);

}
void potencia(int e, int *n){
    int res=1;
  
    while(e>0){
            res=res*(*n);
            
            e-=1;
    }
    *n=res;
}