#include <stdlib.h>
#include <stdio.h>

int matriz_simetrica(int **M,int n);

int main(){

  return 0;
}

int matriz_simetrica(int **M,int filas,int col){
    int b =1;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (M[i][j]!= M[j][i]){
                b =0;
                i =filas; // si eso se da forzamos la salida del bucle
            }
        }
        
    } 
    return b; // si b es 0 la matriz no es simetrica
}