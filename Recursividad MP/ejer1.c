#include <stdio.h> 
#include <stdlib.h>
//Obtener la moda de una serie de elementos
int recursiva(int *vec,int tam, int i,int moda);
int contador_aparariciones(int n, int tam,int contador,int i,int *vec);
int main(){
    int vec[5]={3,3,5,4,1};
    printf("Moda==>%i\n",recursiva(vec,5,0,0));
}
//Recibe inicializado un vector
int recursiva(int *vec,int tam,int i,int moda){
    
    int ap1=contador_aparariciones(vec[i],sizeof(vec),0,0,vec);
    int ap2=contador_aparariciones(vec[i-1],sizeof(vec),0,0,vec);
    if (i==tam-1)
    {
        return moda;
    }
    else
    {
        
        if (ap1>ap2){
             moda=vec[i];
        }
        else
        {
            moda=ap2;
        }
    }
    

}
int contador_aparariciones(int n,int tam,int contador,int i,int *vec){
    if (n==vec[i])
    {
        contador=contador+1;
    }
    
    if(i==tam-1){
        return contador;
    }
    contador_aparariciones(n,tam,contador,i=i+1,vec);
}