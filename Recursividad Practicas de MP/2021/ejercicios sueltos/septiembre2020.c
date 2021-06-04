#include <stdlib.h>
#include <stdio.h>
void rec_matriz_2020(int f, int c,int f_it,int c_it, int m[][c],int fase);
void llamada_matriz_2020(int n);
int main(){
    llamada_matriz_2020(5);
  return 0;
}

void llamada_matriz_2020(int n){
    int m[n][n];
    rec_matriz_2020(n,n,0,0,m,0);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%i ",m[i][j]);
        }
        printf("\n");
    }
    
}

void rec_matriz_2020(int f, int c,int f_it,int c_it, int m[][c],int fase){
    
    if (fase<2){
        if (fase!=1)
        {
            //CAMBIO DE FASE
            if (f_it>=f)
            {
                fase++;
            //RESETEO DE LOS VALORES
                c_it=0;f_it=0;
            }
            //PARA LA PRIMERA LINEA DE 1 0 0 0 . . .
            if (f_it==0 && c_it==0)
            {
                m[f_it][c_it]=1;
            }
            if (f_it==0 && c_it>0)
            {
                m[f_it][c_it]=0;
            }
            if ( f_it>0 ){
                //El primer elemento de cada fila es el ultimo distinto de 0
                m[f_it][0]=m[f_it-1][f_it-1];
                //PARA EL RESTO DE ELEMENTOS
                if(c_it!=0)
                {
                    m[f_it][c_it] = m[f_it-1][c_it-1] + m[f_it][c_it-1];
                }
                //TRIANGULACION DEL RESTO de elementos 
                if(c_it>f_it){
                    m[f_it][c_it]=0;
                }    
            
            }
        if (c_it>=c)//RECORRER LAS FILAS
        {
            c_it=0;
            f_it++;
        }
        
       
    }
    if(fase==1){
        
        if (f_it>=f)
        {
            fase++;
        }
        //printf("Valores f_it=%i\tc_it=%i\n",f_it,c_it);
        //m[f_it][c_it]=m[c_it][f_it];
        if (c_it>c-1)//RECORRER LAS FILAS
        {
            c_it=0;
            f_it++;
        }
    }
    rec_matriz_2020(f,c,f_it,c_it+1,m,fase); 
    }
}