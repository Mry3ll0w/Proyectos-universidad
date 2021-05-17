#include <stdlib.h>
#include <math.h>

int recursiva_ej8(int v[], int cont, int j, int k, int lim);
int* insertar_elementos(int size, int v[], int i);
int sumatorio(int v[], int min, int max);

int main(){
    int n;
    printf("size del v: ");
    scanf("%i", &n);
    int a[n];
    
    printf("\nNumero de parejas: %i\n", recursiva_ej8(insertar_elementos(n,a,0), 0, 0, n-1, n));
    
    return 0;
}

//Cabecera:insertar_elementos(int size, int v[], int i)
//Precondición: longitud del v inicializada
//Postcondición: asigna a v los valores
int* insertar_elementos(int size, int v[], int i){
    if(i == size){
        return v;
    }
    else{
        printf("\nv[%i]= ", i+1);
        scanf("%i", &v[i]);
        insertar_elementos(size, v, i+1);
    }
}


//Cabecera: recursiva_ej8(int v[], int cont, int j, int k, int lim)
//Precondición: Revibe un v no vacio y j, k, sum1, sum2, lim >0
//Postcondición: devuelve x pareja que cumplen con lo solicitado en el enunciado
int recursiva_ej8(int v[], int cont, int j, int k, int lim){
    if(j > (lim-1)/2 && k < (lim-1)/2){
        return cont;
    }

       
    if(sumatorio(v, 0, j)==sumatorio(v, k, lim-1)){
            cont++;
    }
        recursiva_ej8(v,cont,j+1,k-1,lim);
    
}

//Cabecera: sumatorio(int v[], int min, int max)
//Precondición: v con valores inicializados al igual que min y max
//Postcondición: devuelve el sumtorio desde v[min] hasta v [max]
int sumatorio(int v[], int min, int max){
    if(min == max){
        return 0;
    }
        v[min]+sumatorio(v, min+1, max);
    
}