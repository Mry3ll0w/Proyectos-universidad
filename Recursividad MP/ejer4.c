#include <stdio.h>
#include <stdlib.h>


int escalar(int vec1[], int vec2[], int i, int producto, int res,int size);

int main(){
    int vec1[5] = {1,2,3,4,5};
    int vec2[5] = {2,4,6,8,10};

    printf("El producto escalar de dichos vectores es = %i\n", escalar(vec1,vec2,0,0,0,5));

    
    
}

//Cabecera: int escalar(int vec1[], int vec2[], int i, int producto, int res);
//Precondición: vectores inicializado, enteros i,producto, res a 0 y size con el tamaño del vector
//Postcondición: devuelve producto escalar de dichos vectores
int escalar(int vec1[], int vec2[], int i, int producto, int res,int size){
    if (i>size){
        return res;
    }
    else{
        return escalar(vec1, vec2, i+1, vec1[i]*vec2[i], res+producto,5);
    }
}