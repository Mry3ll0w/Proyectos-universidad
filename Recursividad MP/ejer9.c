#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n_parejas(int vector[], int cont, int j, int k, int suma1, int suma2);

int main(){
    int vector[10]={5,1,7,0,2,9,11,3,8,1};

    printf("Parajas qeu hay = %i\n", parejas(vector,0,0,9,0,0));

    
    return 0;
}


int n_parejas(int v[], int contador, int j, int k, int s1, int s2){
    if(j>9 && k<0){
        return contador;
    }
    else{
        s1=s1+v[j];
        s2=s2+v[k];
        if(s1==s2){
            contador++;
        }
        return n_parejas(v,contador,j+1,k-1,s1,s2);
    }
}