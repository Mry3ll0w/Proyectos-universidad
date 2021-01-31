#include <stdlib.h>
#include <stdio.h>

int* count_min_matr(int m[4][4],int row, int col,int v[row]);
int min_vec(int v[],int size,int aux,int cand);
int rec_candidato(int m[4][4],int row,int col, int v[]);
int main(){
    int m[4][4]={{7,8,9,9},{8,7,5,6},{7,9,8,6},{6,6,7,6}};
    int v[4];
    printf("%d\n",rec_candidato(m,4,4,v));//no se pq no devuelve nada dentro de la funcion pero funcionan todas las rec menos la llamada
  return 0;
}

int* count_min_matr(int m[4][4],int row,int col,int v[row]){
    v[row-1] = m[0][0];
    if (row < 1)
    {
        return v;
    }
    
    if (v[row-1] > m[row-1][col-1])
    {
        v[row-1] = m[row-1][col-1];
    }
    if (col < 1)
    {
        row-=1;
    }
    
    count_min_matr(m,row,col-=1,v);

}

int min_vec(int v[],int size,int aux,int cand){
    if (size < 1)
    {
        printf("%d, ",cand); 
        return cand;
    }
    
    if (aux < v[size-1])
    {
       
        aux=v[size-1];
        cand = size+1;
    }
       
    min_vec(v,size-=1,aux,cand);
}

int rec_candidato(int m[4][4],int row,int col,int v[]){
    count_min_matr(m,row,col,v);
    return min_vec(v,row,v[0],0);
}