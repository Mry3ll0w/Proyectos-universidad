#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int s_vec(int vector[], int suma, int i);

int main(){
    int v[8]={3,2,1,1,5,2,1,6};

    printf("La Suma es = %i \n", suma_vec(v,0,1));

   
    return 0;
}


int s_vec(int v[], int sum, int i){
    if(i>2){
        return sum;
    }
    else{
        if(v[i]>v[i*2] && v[i]>v[(i*2)+1]){
            sum=sum+v[i];
        }
        return s_vec(v,sum,i+1);
    }
}