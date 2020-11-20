#include <iostream>
#include "PILA.h"
#include <cstring>
#include <algorithm>
using namespace std;
bool ej1(PILA<char> cad);//EJ 2 similar a EJ1 (no merece la pena hacerlo)
void ej3(PILA<int> p1,int a,int b);
//Devuelve un entero aleatorio entre un rango determinado
int funct(int a, int b){return (rand()%(b-a+1)+a);}
int main() {
    char cad[]="caca";
    PILA<char>pc((sizeof(cad)/sizeof(char))-1);
    PILA<int>pi(8);
    for (int i = 0; i <sizeof(cad)/sizeof(char)-1; ++i) {
        pc.push(cad[i]);
    }
    //Generar nº enteros aleatorios
    for (int i = 0; i <8 ; ++i) {
        pi.push(funct(1,9));
    }
    pi.contenido();
    ej3(pi,8,4);
    pi.contenido();

    return 0;
}

//Ejercicio 1: determine y devuelva si una secuencia de caracteres de entrada
//es de la forma X&Y , donde X es una cadena de caracteres e Y es la cadena inversa,
//separadas por el carácter ‘&’
bool ej1(PILA<char>cad) {
    char aux[sizeof(cad)/sizeof(char)];
    for (char & i : aux) {
        i = cad.pop();
    }
    char *aux2 = strrev(aux);
    cout<<aux2<<endl;
    if (strcmp(aux,aux2)==0){
        return true;
    }
    else{
        return false;
    }
}//ok
void ej3(PILA<int> p1, int a, int b) {
    int aux[p1.tope()],aux2[p1.tope()];
    int li,ls;
    for (int i = 0; i <p1.tope() ; ++i) {
        //Obtenemos los limites superior e inferior
        aux[i]=p1.pop();
        if (a==aux[i]){
            li=i;
        }
        if (b==aux[i]){
            ls=i;
        }
    }
    //Corregir en caso de que los limites sup/inf esten invertidos
    if (ls<li){
        int x = li;
        li=ls;
        ls=li;
    }
    //damos la vuelta al vector para realizar la copia
    memcpy(aux2,aux,sizeof aux);
    reverse(aux2,aux2+p1.tope());
    for (int j = li; j <=ls ; ++j) {
        aux[j]=aux2[j];
    }
    //hacemos el push en la pila de nuevo (ya que al hacer el pop anteriormente debería estar vacia)
    for (int i = 0; i < p1.tope(); ++i) {
        p1.push(aux[i]);
    }
}
//ok