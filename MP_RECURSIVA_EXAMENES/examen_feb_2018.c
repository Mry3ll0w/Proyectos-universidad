#include <stdlib.h>
#include <stdio.h>

int desc_cifras(int n);
int n_hashard(int n);
int main(){

    printf("%d\n",n_hashard(530));

    //return 0;
}

//Devuelve la suma del numero de cifras 
int desc_cifras(int n){
    static int aux=0;
    if(n == 0){
        return aux;   
    }
    aux+=n%10;
    desc_cifras(n/=10); 
}

int n_hashard(int n){//Si es nuemro de Hashard

    if (n % desc_cifras(n))
    {
        return 1; //NO es numero de hashard
    }
    else{
        return 0; //SI es numero de Hashard
    }
    
}