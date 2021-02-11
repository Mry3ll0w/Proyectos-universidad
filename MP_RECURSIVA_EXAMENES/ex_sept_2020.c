#include <stdlib.h>
#include <stdio.h>

int mat_initializer(int n,int m[n][n], int row, int col);
int mat_filler(int n,int m[n][n],int row, int col, int lim_col);
int last_num(int n, int m[n][n],int row,int col);
int rec(int);

int main(){
    int m[5][5];
    mat_initializer(5,m,0,0);
    mat_filler(5,m,1,0,0);
    for ( int i=0; i<5 ;i++ ){
        for ( int j=0; j<5; j++){
          printf("%d ",m[i][j]);
        }
        printf("\n");
    }

  return 0;
}

//aux contiene n
//row, col,lim_col empiezan en 0
int mat_initializer(int n, int m[n][n],int row, int col){
    if(row <= 0){
        m[row][col]=0;
        m[row][0]=1;//siempre debe empezar con los valores 1 0 0 0 0 ...
    }
    else{
        m[row][col]=0;
    }
    if(row > n ){
        return 0;
    }

    if(col == n){
        row +=1;
        col =0; //reset del valor de col
    }
    mat_initializer(n,m,row,col+=1);
}

int last_num(int n,int m[n][n],int row, int col){
    if(m[row][col]==0){
        return m[row][col-1];
   
    }    
    last_num(n,m,row,col+=1);
}
//row empieza en 2 
int mat_filler(int n, int m[n][n],int row, int col, int lim_col){
    
    if(row == n ){
        return 0;
    }
    else if(col <= lim_col&&col!=0){
        m[row][col]= m[row][col-1] + m[row-1][col-1];
    }
    
    if (col==0)
    {
        m[row][col]=last_num(n,m,row,0);
    }

    if(col == n){
        row +=1;
        col =0; //reset del valor de col
    }
    mat_filler(n,m,row,col+=1,lim_col+=1);
}

int rec(int n){

}