#include <iostream>
#include "ListaEnla.h"
using namespace std;
//Devuelve un numero aleatorio dentro de un rango
int num_aleatorio(int a, int b){
    return (rand()%(b-a+1)+a);
}
ListaEnla<int> ej2(ListaEnla<int>);
ListaEnla<int> ej3(int);
ListaEnla<int> ej4(ListaEnla<int>, ListaEnla<int>);
void ej5();

int main() {

    ej5();
    return 0;
}

/* El ejercicio uno es de implementar una lista circular y no aparece en los examenes */

/*
 * Una lista ordenada es una lista en la cual los elementos están ordenados de forma ascendente según
 * la relación de orden definida entre ellos. Especifique e implemente el TAD Lista ordenada.
 */
ListaEnla<int> ej2(ListaEnla<int>l1) {

/*FORMA DE INSERTAR ELEMENTOS EN LA PILA*/
    int it=0,v[9];
    for (ListaEnla<int>::posicion pos = l1.primera(); pos != l1.fin() ; pos=l1.siguiente(pos)) {
        v[it]=l1.elemento(pos);
        it++;
    }
    //Comenzamos la copia de datos a un vector auxiliar para ordenarlos (Con selección directa)
    for ( int i=0; i<9 ;i++ ){
        for ( int j=i; j<9; j++){
            if (v[i]>v[j])
            {
                int aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    it=0;
    for (ListaEnla<int>::posicion pos = l1.primera(); pos != l1.fin() ; pos=l1.siguiente(pos)) {
        l1.elemento(pos)=v[it];
        it++;
    }
    ej5();
    return l1;
}

/*
* Implemente una función que tenga como entrada una lista de enteros y un entero x, de
* forma que devuelva la lista modificada mediante la eliminación de todas las ocurrencias
* de x en la lista.
*/
ListaEnla<int> ej3(int ocurrencia) {
    ListaEnla<int> l1,l2;
    //Introducimos los elementos a la lista
    for (int i = 0; i < 9 ; ++i) {
        l1.insertar(i+1,l1.fin());
    }
    while (l1.fin()!=l1.buscar(ocurrencia)){
        l1.eliminar(l1.buscar(ocurrencia)); //Elimina todas las ocurrencias en la posición
    }
    l2 = l1;
    return l1;
}

ListaEnla<int> ej4(ListaEnla<int> l1, ListaEnla<int>l2) {
    ListaEnla<int> l3;
    for(ListaEnla<int>::posicion pos = l1.primera(); pos != l1.fin() ; pos=l1.siguiente(pos)){
        l3.insertar(l1.elemento(pos),l3.fin());
    }
    for(ListaEnla<int>::posicion pos = l2.primera(); pos != l2.fin() ; pos=l2.siguiente(pos)){
        l3.insertar(l2.elemento(pos),l3.fin());
    }
    return l3;
}
/*
Implemente una función ImprimeInverso() que imprima los elementos de una lista simplemente enlazada de enteros
en orden inverso a partir de la posición p.
*/
void ej5() {
    ListaEnla<int> l;
    for (int i = 0; i < 7 ; ++i) {
        l.insertar(num_aleatorio(1,45), l.fin());
    }
    cout<<"Orden normal"<<endl;
    for (ListaEnla<int>::posicion pos = l.primera(); pos != l.fin() ; pos=l.siguiente(pos)) {
        cout<<l.elemento(pos)<<", ";
    }
    cout<<endl;
    cout<<"Orden iverso"<<endl;
    ListaEnla<int>::posicion pos_aux;
    for(ListaEnla<int>::posicion pos = l.anterior(l.fin()); pos != l.primera() ; pos = l.anterior(pos)){
        cout<<l.elemento(pos)<<", ";
        pos_aux = pos;
    }
    cout<<l.elemento(l.anterior(pos_aux))<<endl;
    l.~ListaEnla();
}


