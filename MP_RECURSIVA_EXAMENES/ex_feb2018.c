#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// cuando raiz^3(n) ==> limite para cambiar de n
int rec_mat(int , int, int );


int main(){

    rec_mat(128,0,0);
  
    return 0;
}
//a y b empiezan en 0
int rec_mat(int n, int a, int b){

    if(a > cbrt(n)){
        return 0;//Fin ejecucion
    }
    if (pow(a,3) + pow(b,3) == n)
    {
        printf("%d  %d \n",a ,b);

    }
    if (b >= cbrt(n))
    {
        b=0;
        a++;
    }
    
    rec_mat(n,a,b+=1);
} 