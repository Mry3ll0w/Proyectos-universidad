#include <stdlib.h>
#include <stdio.h>

int matriz_simetrica(int M[][3],int filas,int col);
int m_simetrica_rec(int M[][3],int filas,int col,int b,int aux);
int main(){
    int M[3][3] = { {1,1,1},
                    {1,1,1},
                    {1,1,1}};
    printf("%d\n",m_simetrica_rec(M,2,2,1,2));
  return 0;
}

int matriz_simetrica(int M[][3],int filas,int col){
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

//B debe empezar en 1 (determina si es o no simetrica), aux contiene el valor de col (para poder recuperarlo despues)
int m_simetrica_rec(int M[][3],int filas,int col,int b,int aux){
    //Condicion de salida de la función recursiva
    
    if (filas < 0)
    {
        return b;
    }
    //Codigo
    if (col < 0)
    {
        filas-=1;
        col = aux;
    }
    
    if ( M[filas][col] != M[col][filas]){
        b = 0;
        return b;// fin de la ejecucion ya que hemos llegado a un valor que demuestra que la Matriz no es simetrica
    }
        
    m_simetrica_rec(M,filas,col-=1,b,aux);
}