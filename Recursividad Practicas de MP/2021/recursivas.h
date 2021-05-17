#ifndef RECURSIVAS_H
#define RECURSIVAS_H
#include<math.h>
#include <stdlib.h>
#include <stdio.h>




/*
Diseñe una función recursiva que calcule la i-ésima cifra de un entero n. Implemente dicha función
en C.
*/
size_t ej_1(int n,int cifra,int buscada){
    if (cifra==0||n<=0)
    {
        return buscada;
    }
    printf("n=%i buscada=%i\n",n,buscada);// 376 /10 = 37 b=6 c=3-1 // 37 %10 = b(7) c=3-2 n=3 // c=0 n=0 3%10=3==> buscada=3
    return ej_1(n=n/10,cifra-1,buscada=n%10);// 37 % 10==> 7
} 
///BONUS cifras de un numero 11234/10 1123 112 11 1 0
size_t cifras_numero(int n){
    if (n<=0)
    {
        return 0;
    }
    return 1 + cifras_numero(n/10); 
}

///

/*
Diseñe un algoritmo que localice de forma recursiva, en la misma pasada, el máximo y el mínimo
de un vector dado no vacío. Implemente dicha función en C.
    - Usamos array size como iterador del vector de bajo nivel
    - Max y min deben comenzar con el primer elemento del array
*/

int ejercicio_2(int s, int max, int *min,int v[]){
    if (s<0)
    {
        return max;
    }

    if (max < v[s]) 
    {
        max = v[s]; 
    }

    if (*min>v[s])
    {
        *min = v[s];
    }

    return ejercicio_2(s-1,max,min,v);
}

/**
 * @brief 
 *   Diseñe un algoritmo que calcule de forma recursiva el producto escalar de dos vectores de n
 *   elementos enteros, n ≥ 0. Implemente dicha función en C.
 * @pre
 *    -si el size de los arrays es != entonces sale ya que no se puede realizar el producto escalar  
 * @return int producto escalar de los arrays
 */
int ej3(int arr_size, int v1[] ,int v2[]){
    if (arr_size < 1)
    {
        return 0;
    }
    return (v1[arr_size-1]*v2[arr_size-1])+ej3(arr_size-=1,v1,v2);
}

/**
 * @brief 
 * 4. Dado un vector ordenado crecientemente A[1..n], siendo n ≥ 1, diseñe un algoritmo que 
 * calcule de forma recursiva la longitud de la escalera más larga, es decir, la longitud 
 * de la secuencia más larga de valores consecutivos que se encuentre en A. 
 * Implemente dicha función en C.
 * @details Recibe un vector ordenado de forma creciente inicializado
 * sea V [5]={2,1,1,4,5} y max_escalera=0=escalera_temp (valores iniciales)
 */
int ejercicio_4_practicas(int v[],int max_escalera, int escalera_temp,int size){
    if (size<2)
    {
        return max_escalera+1;//Ya que empieza en 0 (0+1+1)+1
    }
    if (v[size-1]==v[size-2])
    {
        escalera_temp++;
    }
    if (escalera_temp>max_escalera)
    {
        max_escalera=escalera_temp;
    }
    else{
        escalera_temp=0;
    }
    
    ejercicio_4_practicas(v, max_escalera, escalera_temp, size-1);
}

/**
 * @brief 
 * 5. Diseñe una función recursiva que determine si en un vector A de n enteros existen dos parejas
 * consecutivas de elementos tales que sus sumas sean idénticas. 
 * Implemente dicha función en C.
 * @details 
 * Precondicion==>Recibe v (sea int v[]={1,1,1,1,4,5,6,2}, un array de bajo de ejemplo), para iterar usamos el 
 * entero size>0, aunque seria mas optimo usar el tipo size_t para iterar de la libreria stdlib.h, 
 * necesaria para la ejecuion de la misma (debido a que nunca pude tener valores<0).
 * En el caso base tenemos que si el size del vector no es menor 
 * 
 */
#define true 1
#define false 0
typedef int bool;
bool ejercicio_5_practicas(int v[], int size){
    if (size<4)
    {
        return false;
    }
    if ((v[size-1]+v[size-2])==(v[size-3]+v[size-4]))
    {
        return true;
    }
    ejercicio_5_practicas(v,size-1);
}

/**
 * @brief Diseñe un algoritmo que calcule de forma recursiva la suma de todos los elementos de un vector A
 * de n enteros que cumplen la siguiente propiedad: 
 * 
 * @details 
 * Precondicion==> Recibe un vector de enteros v inicializado previamente
 * y su dimension como un entero size.
 * Aunque aunque seria mas optimo usar el tipo size_t para iterar de la libreria stdlib.h, 
 * necesaria para la ejecuion de la misma (debido a que nunca pude tener valores<0), mediante #include <stdlib.h>
 * Ademas recibe parametro entero result donde iremos almacenando la suma de los elementos que cumplan la condicion dada
 * 
 * Postcondicion==> Devuelve la suma de todos los elementos que cumplan las condiciones dadas (result)
 */
int ejercicio_6_practicas(int v[], int size, int result ){
    if ((size/2)-1<=1)
    {
        return result;
    }
    
    if(v[size]>v[size*2] && v[size]>v[(size*2)+1]){
            result+=v[size];
    }

    ejercicio_6_practicas(v,size-1,0);
}

/* ------------------------------- ejercicio 7 ------------------------------ */
/**
 * @brief Diseñe una función recursiva que devuelva cuántos elementos de una matriz A de nxm elementos
 * enteros cumplen que es mayor que el resto de los elementos de su fila y menor que el resto de
 * elementos de su columna o viceversa, es decir, es menor que el resto de los elementos de su fila y
 * mayor que el resto de los elementos de su columna. Implemente dicha función en C
 * Para la resolucion de este ejercicio desglosaremos la funcion pedida en 4 funciones para asi
 * poder rediucir la complejidad del mismo y afrontar de forma mas optima y sencilla lo solicitado.
 * Las funciones seran:
 * 1) int ej7_menor_fila(int filas,int col,int m)
 *      -Precondicion: Necesita recibir una matriz no vacia con filas y columnas con valores mayores que 0
 *      -Postconidicion: Devuelve el menor elemento de la fila
 * 
 * 2) int ej7_mayor_columna(int filas,int col,int m)
 *      -Precondicion: Necesita recibir una matriz no vacia con filas y columnas con valores mayores que 0
 *      -Postconidicion: Devuelve el mayor elemento de la columna
 * 
 * 3) int ej7_recursiva(int filas, int col,int f_it, int c_it,int m[][col])
 *      -Precondicion: Necesita recibir una matriz no vacia con filas y columnas con valores mayores que 0,
 *      ademas de los parametros c_it y f_it con valor 0, ya que con estos iteraremos
 *      -Postcondicion: Devuelve la cantidad de numeros que cumplen con los requisitos exigidos
 * 
 * 4) int ej7_llamada_pr(int filas,int columnas,int m[][columnas])
 *      -Precondicion: Necesita recibir una matriz no vacia con filas y columnas con valores mayores que 0
 *      -Postcondicion: Llama a la funcion recursiva que realiza lo exigido en el ejercicio e inicializa los valores de la matriz
 */


int ej7_menor_fila(int filas,int col,int m[][col],int min){
    if (col<0)
    {
        return min;
    }
    if (min>m[filas][col])
    {
        min=m[filas][col];
    }
    ej7_menor_fila(filas,col-1,m,min);
}
int ej7_mayor_columna(int filas,int col,int m[][col],int max){
    if (filas<1)
    {
        return max;
    }
    if(max<m[filas][col]){
        max=m[filas][col];
    }
    ej7_mayor_columna(filas-1,col,m,max);
}


int ej7_recursiva(int filas, int col,int f_it, int c_it,int m[][col]){
    if (c_it==col && f_it==filas)
    {
        return 0;
    }

/* ---------------------- comprobacion de requisitos --------------------- */
    if (ej7_menor_fila(f_it,col,m,m[f_it][col])==m[f_it][c_it]&&ej7_mayor_columna(filas,c_it,m,m[filas][c_it])==m[f_it][c_it])
    {
        return 1+ej7_recursiva(filas,col,f_it,c_it,m);
    }
    if (c_it<0)
    {
       c_it=0;
       f_it++;
    }
    
    
}
int ej7_llamada_pr(int filas,int columnas,int m[][columnas]){
    return ej7_recursiva(filas,columnas,0,0,m);//int f_it, int c_it
}

/* ------------------------------- EJERCICIO 8 ------------------------------ */

int recursiva_ej8(int v[], int cont, int j, int k, int lim);
int* insertar_elementos(int size, int v[], int i);
int sumatorio(int v[], int min, int max);
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

/* -------------------------------- EJERCICIO 9 ------------------------------- */
void ej9_sum_matriz();
void ej9_matriz(int f, int c,int f_it,int c_it, int m[][c]){
    if (f<f_it)//caso general
    {
        //inicializamos la primera linea
        if (f_it==0 && c_it==0)
        {
            m[f_it][c_it]=1;
        }
        if (f_it==0 && c_it>0)
        {
            m[f_it][c_it]=0;
        }
        
        if (f_it>1)
        {
            
        }
        
         
       
        
    }
    if (c==c_it)
    {
        c_it=0;
        f_it+=1;
    }
    //ej9_inicializar_matriz(f,c,f_it+1,c_it+1,m);
}
/*
void ej9_llamada(int n, int m[][]){
    
}
*/
//Procedimiento recursivo para obtener los
void rec_jun_21_lower(int f, int c,int it_c,int m[][c],int v_sal[],int it_v,int lowest){
    if (f>0)
    {
       
        if (lowest>m[f-1][it_c])
        {
            lowest=m[f-1][it_c];
        }
        if (it_c<0)
        {
            printf("LOWER= %i\t m[%i][%i]\n",lowest,f-1,it_c);
            f-=1;//decrementamos la fila
            v_sal[it_v]=lowest;//guardamos el menor de la fila
            lowest=m[f][0];//pasamos al siguiente primero de la fila
            it_c=c;//restablecemos el iterador
            it_v++;//incrementamos para el siguiente elemento de menores
        }
        rec_jun_21_lower(f,c,it_c-1,m,v_sal,it_v,lowest); 
    }
}
//N nos sirve para conocer al candidato por tanto debe estar incializado con el n de candidatos
int rec_jun_21_highest(int v[],int n,int n_it,int inverser,int highest){
    if(n_it<0){
       return n-inverser;
    }
    if (highest<v[n_it])
    {
        highest=v[n_it];
        inverser=n_it;
    }
    rec_jun_21_highest(v,n,n_it-1,inverser,highest);
}
//int vec_can[f] vector que contendra las valoraciones mas bajas de los candidatos
int rec_jun_21_llamada(int f,int c,int m[][c],int vec_can[f] ){
    
    rec_jun_21_lower(f,c,c,m,vec_can,0,m[0][0]);//guardamos las puntuaciones mas bajas en cada vector
    return rec_jun_21_highest(vec_can,f,0,0,vec_can[0]);
}


/**
 * @brief Recursiva del examen de Septiembre de 2021
 */
void ex_enero_21(int n,int *v,int size,int it){
    if (size>0)
    {
        //printf("%i %i\n",v[it-1],v[it]);
        if (v[it-1]%v[it]==0 && v[it]!=0 && v[it-1]!=0)
        {
            v[it-1]= 0;
        }
        if (it<1){
            it=n-1;
            size-=1;//se pasa al siguiente numero
        }
       ex_enero_21(n,v,size,it-1); 
    }
    
}
/**
 * @brief 
 *  RECURSIVA 2018 Septiembre
 * @param n empieza con el numero n>1
 * @param lim inf = 1 
 * @param lim_top = (n^1/3 )-1 
 * @param l_lim_top = 0 
 * @param l_lim_inf = 0 
 * @param counter = 2
 */
void ex_sept_2018(int n, int a, int b){
    if(a < cbrt(n)){
        
        if (pow(a,3) + pow(b,3) == n)
        {
            printf("%d  %d \n",a ,b);
        }
        if (b >= cbrt(n))
        {
            b=1;
            a++;
        }
        ex_sept_2018(n,a,b+=1);//Vamos aumentando b para llegar a la raiz cubica y repetimos con a++
    }

}
void llamada_ex_sept_2018(int n){
    ex_sept_2018(n,1,1);
}

/**
 * @brief Voy a rehacer el examen de enero de 2021 pero con las normas de MP
 * min empieza con m[0][0]
 * v tiene size = f
 */
int rec_ex_febrero_21_v2(int f, int c,int f_it,int c_it, int check_mas_baja,int m[][c],int v[],int min ,int max,int it_v,int cand){
    if (check_mas_baja==3)
    {
        return cand+1;
    }
    
    if (check_mas_baja==0)
    {
        if (f_it>=f)
        {
            check_mas_baja=1;//fin primera parte
        }
        
        if (c_it>c)
        {
            printf("\n\n");
            c_it=0;
            v[it_v]=min;
            it_v++;
            f_it+=1;
            min=m[f_it][0];
        }
       
        
        if (min>m[f_it][c_it-1])
        {
            min = m[f_it][c_it];
        }
        
    }
    if (check_mas_baja==1)//se han insertado todos los menores en el vector
    {
        max=v[0];
        c_it=0;//usamos c_it como iterador de los elementos del vector ya que este se va aumentando
        //reiniciamos los iteradores y pasamos a la siguiente fase
        check_mas_baja=2;
    }
    if (check_mas_baja==2)//fase 2==> busqueda de 
    {
       if (c_it>=f)
        {
            check_mas_baja=3;//fin primera parte
        }
        
        if (max<v[c_it])
        {
            max =v[c_it];
            cand =c_it;
        }
    }
    
    rec_ex_febrero_21_v2(f,c,f_it,c_it+1,check_mas_baja,m,v,min,max,it_v,cand);
    
}
int llamada_ex_febrero_21_v2(int f,int c,int m[][c]){

}


int ex_feb_2018(int n,int suma_cifras,int num_temp){
    if (num_temp<=0)
    {
        
        if (n%suma_cifras)
        {
            return 0;//no es numero de hashard
        }
        else
            return 1;
    }
    
    if (num_temp>=0)
    {
        printf("cifra==>%i\n",num_temp%10);
        suma_cifras+=num_temp%10;

        ex_feb_2018(n,suma_cifras,num_temp/10);
    }
   
}


int llamada_ex_feb_2018(int n){
    int t=ex_feb_2018(n,0,n);
    if (t==0)
    {
        printf("no es numero de hashard\n");
    }
    else
        printf("Numero de hashard\n");
    
    return t;
}

#endif  