#include <stdio.h>
/*
 * Contendra todos los ejercicios de recursividad que se hagan, para el repaso del examen
 */
//Ejercicios de Practicas
int ej1_p(unsigned* , unsigned , unsigned );
unsigned ej1_aux_cont_ap(unsigned *, unsigned, unsigned, unsigned );
int ej2 (int, int);
int ej3(unsigned* , unsigned* , unsigned*, int);
int ej4(int*,int*,int,int);
int ej5(int *, int, int);
int ej6(int *, int);

int cont_escalera(int *, int ,int,int);

int main() {

    unsigned v1[]={3, 1, 8, 7, 4, 5},min,max;
    int vec1[]={2,3,7,2},vec2[]={3,2,1,7};
    int size_v = sizeof(v1)/sizeof(unsigned);
    printf("Mayor numero de ocurrencias: %d\n",ej1_p(v1, 5, 0) );
    printf("Cifra %d \n",ej2(103,2) );
    min = v1[0];
    max = v1[0];
    ej3(v1,&min, &max, size_v );
    printf("Minimo = %d\tMaximo = %d \n", min, max);
    printf("Producto Escalar = %d\n", ej4(vec1,vec2,4,0) );
    printf("Escalera mas grande: %d\n", ej5(vec1,4,0));
    printf("Parejas Consecutivas: %d\n",ej6(vec1,4));
    return 0;
}

/*
 * Dado un vector A de n enteros ordenado crecientemente, diseñe una función
 * recursiva que devuelva su moda, es decir, el valor más frecuente de A.
 */
int ej1_p(unsigned v[], unsigned size, unsigned aux) {
    if(size < 2){ //Caso base, tamaño inicial mal indicado
        return v [ aux  ];
    }
    else{
     aux = ej1_aux_cont_ap(v,size,1,v[(sizeof(v)/sizeof(unsigned))-1]);
     unsigned ap2 = ej1_aux_cont_ap(v, size,0 ,v[size-2]);
     if(aux < ap2 ){
        aux = ap2;
     }
    }
    ej1_p(v, size-=1, aux);
}
unsigned ej1_aux_cont_ap(unsigned v[], unsigned n, unsigned ap, unsigned ocurrencia) {
   if(n < 1){
       return ap;
   }
   if(ocurrencia == v[n-1]){
        ap++;
   }
   return ej1_aux_cont_ap(v, n-=1,ap, ocurrencia);
}

/*Diseña una función recursiva que calcule la i-ésima cifra de un entero n*/
int ej2(int numero, int cifra) {

    if((cifra < 0)||(numero <= 0)){
        return numero;
    }
    else{
        numero = numero / 10;
    }
    return ej2(numero, cifra-=1);
}


/*Diseña un algoritmo que localice de forma recursiva, en la misma pasada, el
 * máximo y el mínimo de un vector dado no vacío.*/
int ej3(unsigned v[], unsigned* min, unsigned* max,int size) {
    if(size < 1){
        return 0;
    }
    if(v[size] < *min){
        *min = v [size];
    }
    else if(v [size] > *max ){
        *max = v [size];
    }
    return ej3(v,min,max,size-=1);
}

int ej4(int *v1, int *v2, int size, int res) {

    if ( (sizeof(v1)/sizeof(int)) != (sizeof(v2)/sizeof(int)) ){
        return -1; //Para hacer el producto escalar necesitamos tener = tamaño
    }
    if(size < 1){
        return res;
    }
    else{
        res += v1[size]*v2[size];
    }

    return ej4(v1, v2, size-=1, res);
}

/* Dado un vector ordenado crecientemente A[1..n], n ≥ 1, diseña un algoritmo que
 * calcule de forma recursiva la longitud de la escalera más larga, es decir, la longitud
 * de la secuencia más larga de valores consecutivos que se encuentre en A.*/
int cont_escalera(int *pInt, int size, int cont, int ocurrencia) {

    if(size<2){
        return cont;
    }
    if((ocurrencia == pInt[size])&&(pInt[size]==pInt[size-1])){
        cont++;
    }
    return cont_escalera(pInt,size-=1,cont,ocurrencia);
}
int ej5(int v[], int size, int escalera) {
    if(size < 2){
        return escalera;
    }
    escalera=cont_escalera(v,sizeof(v)/sizeof(int),0,v[0]);
    int aux = cont_escalera(v, sizeof(v)/sizeof(int),0,v[size]);
    if(escalera < aux){
        escalera = aux;
    }
    return ej5(v,size-=1,escalera);
}
/*- Diseña una función recursiva que determine si en un vector A de n enteros existen
 * dos parejas consecutivas de elementos tales que sus sumas sean idénticas.*/
int ej6(int v[], int size ){
    if(size < 4){
        return 0;
    }
    else{
        if ((v[size-1]+v[size-2])==(v[size-3]+v[size-4])){
            return 1;
        }
    }
    ej6(v,size-=1);
}





