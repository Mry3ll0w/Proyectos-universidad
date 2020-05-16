//Diseña un algoritmo que localice de forma recursiva, en la misma pasada, el
//máximo y el mínimo de un vector dado no vacío.
#include <stdio.h>
#include <stdlib.h>
int recursiva(int *vec, int i, int tam,int maximo,int minimo);

int main(){
    int vec[5]={1,2,5,4,2};
    int maximo=vec[0];
    int minimo=vec[0];
    
    maximo=recursiva(vec,0,5,maximo,minimo);
    printf("minimo==>%i\n",minimo);
    printf("maximo==>%i\n",maximo);
}

int recursiva(int *vec,int i, int tam,int maximo,int minimo){
     
    //Si el vector pasado es Null devuelve -1 (mensaje error)
    if(vec==NULL){
        return -1;
    }

    if(i==tam-1){
      
        return maximo;
    }
    else
    {
        if (maximo<vec[i+1])
        {
            maximo=vec[i+1];
            
        }
        if (minimo>vec[i+1])
        {
            minimo=vec[i+1];
        }
    }
    recursiva(vec,i+1,tam,maximo,minimo);
}