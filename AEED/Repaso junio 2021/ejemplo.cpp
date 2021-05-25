#include <iostream>
#include "tads implementados profesorado/pila_enla.h"
#include "tads implementados profesorado/Cola_Din.h"
using namespace std;//Avoid using std:: ....

int main(){
    /* ----------------------------- MANEJO DE PILA ----------------------------- */
    PilaEnla<int>p,q; 
    p.push(1);
    p.push(2);
    p.push(3);
    //COMO RECORREMOS EL CONTENIDO DE LA PILA
    PilaEnla<int>p_aux;
    p_aux=p;
    while (p_aux.vacia()!=true)
    {
        cout<<p_aux.tope()<<", ";
        p_aux.pop();
    }
    cout<<endl<<endl;
    
    /* ------------------------------- MANEJO COLA ------------------------------ */
    ColaDin<int>c,c2;

    c.push(1);
    c.push(2);
    c.push(3);
    //RECORRER COLA
    while (c.vacia()!=true)
    {
        cout<<c.frente()<<", ";
        c.pop();
    }
    cout<<endl<<endl;


    return 0;
}