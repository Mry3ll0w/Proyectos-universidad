#include <stdio.h>
#include <stdlib.h>
/*Escribe un programa que muestre por pantalla la suma 
de los 10 primeros números naturales
*/
int main(){
    int i,sum=0;
    for(i=0;i<10||i==10;i++){
        sum=sum+i;
    }
        printf("La suma es=%i\n",sum);
    return 0;
}