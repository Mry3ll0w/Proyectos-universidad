#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program that calculates the standard deviation of a series of real numbers stored
in a array.
*/

float media(float*,int);
void standard_desv(float*,int);

int main (){
    float *data;int size,i;
        printf("Introduce the size of the array\n");
            scanf("%i",&size);
        data=(float*)malloc(size*sizeof(int));   
        printf("Introduce los elementos del array\n"); 
        for(i=0;i<size;i++){
            scanf("%f",&data[i]);
        }
        standard_desv(data,size);

return 0;
}

float media(float* d,int size){//ok
    float res=0;int i;
    for ( i = 0; i < size; i++)
    {
        res=res+d[i];
    }
    return res/size;
}

void standard_desv(float* d,int size){//ok
    float res=0,average;int i;
        average=media(d,size);
        for ( i = 0; i < size; i++)
        {
            res=res+pow((d[i]-average),2);
        }
        res=res/size;
        res=sqrt(res);
        printf("The standard desviation is %f\n",res);
        
}

