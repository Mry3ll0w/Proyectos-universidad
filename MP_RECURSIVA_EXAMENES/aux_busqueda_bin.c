#include <stdlib.h>
#include <stdio.h>

int busqueda_binaria(int x, int *v, int i,int j); // x es la ocurrencia a buscar

int main(){
    int v[]={0,2,7,8,11,89,9};
    printf("%d,",busqueda_binaria(11,v,0,7));

}

int busqueda_binaria(int x, int *v, int i,int j){
    int p = 0;
    if(i<=j){
        p = (i+j)/2;
        if(x<v[p]){
            p=busqueda_binaria(x,v,i,p-1);
        }
         else{
            if(x > v[p]){
                p = busqueda_binaria(x,v,p+1,j);
            }
        }
    }
}