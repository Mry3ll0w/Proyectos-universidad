#include <stdlib.h>
#include <stdio.h>

void print_matrix(int f,int c, int f_it, int c_it,int m[][c]);
int matrix_inversa(int f,int c, int f_it, int c_it,int m[][c]);
int main(){
    int m[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    
    print_matrix(4,4,0,0,m);
    
    for ( int i=0; i<4 ;i++ ){
        for ( int j=0; j<4; j++){
          printf("%i ",m[i][j]);
        }
        printf("\n");
    }
    printf("%i\n",matrix_inversa(4,4,0,0,m));
    return 0;
}
void print_matrix(int f,int c, int f_it, int c_it,int m[][c]){
    
    if (f_it<=f-1)//Caso general
    {
        if (c_it>c-1)
        {
            c_it=0;
            f_it++;
            
        }
        m[f_it][c_it]=m[c_it][f_it];
        
        print_matrix(f,c,f_it,c_it+1,m);
    }
    

}
int matrix_inversa(int f,int c, int f_it, int c_it,int m[][c]){
    
    if (f_it>f)//Caso base
    {
       return  0;
    }
    if (c_it>=c)
    {
            c_it=0;
            f_it++;
            printf("\n");
    }
    if (m[f_it][c_it]!=m[c_it][f_it])
    {
            return -1;
    }
    matrix_inversa(f,c,f_it,c_it+1,m);

}