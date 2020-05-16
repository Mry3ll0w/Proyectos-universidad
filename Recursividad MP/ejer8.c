#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int change(int v[], int cont, int i);

int main(){
    int vector[10]={11,2,3,2,1,2,2,5,3,5};

    printf("cambio tendencia= %i\n", cambio(vector,0,0));
    return 0;
}


int change(int v[], int cont, int i){
    if(i>7){ //Termina en 7 ya que si no al hacer i+2 se desbordaria
        return cont;
    }
    else{
        if(v[i]>v[i+1] && v[i+1]<v[i+2]){
            cont++;
        }
        if(v[i]<v[i+1] && v[i+1]>v[i+2]){
            cont++;
        }
        return cambio(v,cont,i+1);
    }
}