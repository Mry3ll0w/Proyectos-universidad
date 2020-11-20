#include <iostream>
#include "PILA.h"
#include <cstring>
using namespace std;
bool ej1(PILA<char> cad);

int main() {
    char cad[]="caca";
    PILA<char>pila((sizeof(cad)/sizeof(char))-1);
    PILA<char>p2(7);
    for (int i = 0; i <sizeof(cad)/sizeof(char)-1; ++i) {
        pila.push(cad[i]);
    }
    cout<<"Valor tmax en pila"<<pila.tope()<<endl;
    pila.copia(pila,p2);
    for (int i = 0; i <p2.tope() ; ++i) {
        cout<<p2.pop()<<endl;
    }
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