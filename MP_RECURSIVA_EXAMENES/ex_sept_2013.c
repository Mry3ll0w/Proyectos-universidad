#include <stdlib.h>
#include <stdio.h>

int intercambio_n_pos(int v[],int size, int n,int aux,int restore);

int main(){
    int v[6]={2,1,4,7,8,9};
    intercambio_n_pos(v,6,3,0,6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d, ",v[i]);
    }
    
  return 0;
}

//restore tiene size inicial para realizar la transposición
int intercambio_n_pos(int v[],int size,int n,int aux, int restore){

    if (n < 1)
    {
        return 0;
    }
    aux = v[(restore-1)-n];
    v[(restore-1)-n] = v[size-1];   
    v[size-1] = aux;
    intercambio_n_pos(v,size-=1,n-=1,aux,restore);
}