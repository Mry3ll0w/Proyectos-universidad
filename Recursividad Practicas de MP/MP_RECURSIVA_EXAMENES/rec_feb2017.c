#include <stdlib.h>
#include <stdio.h>

int rec_simetrica(int m[][3],int fila, int col );

int main(){
  int m[3][3]={{1,1,1},{1,1,1},{1,1,1}};
  printf("%d\n",rec_simetrica(m,3,3));

  return 0;
}

int rec_simetrica(int m[][3], int fila, int col){
    static int sim=1;
    if (fila != col)
    {
      sim=0;
      return sim; //NO simetrica
    }
    if(fila<1){
      return sim;
    }

    if (m[fila-1][col-1]!=m[col-1][fila-1]){}
    {
      return sim;
    }
    if(col<1){
      col=2;
      fila-1;
      //Reset de columnas y decrementamos fila
    }
    rec_simetrica(m,fila,col-=1);
}