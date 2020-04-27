#include <stdio.h>
#include <stdlib.h>
/*
Realiza un programa que imprima la suma de los números
pares entre dos y mil
*/
int main(){
    long int num,sum;
        for (int num=2;num<2000||num==2000;num++){
            if(2%num){
                sum=sum+num;
            }

        }
        printf("Valor de la suma: %li\n",sum);


}