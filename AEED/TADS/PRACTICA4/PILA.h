// Created by anton on 17/11/2020
#ifndef PILA_GENERICA_PILA_H
#define PILA_GENERICA_PILA_H
#include <cassert>
#include <iostream>
using namespace std;
template <typename typo>
class PILA {
    public:
        explicit PILA(int size);
        void push (const typo& x);
        typo pop ();
        bool vacia()const;
        bool llena()const;
        //PILA operator = (PILA& a,PILA& b);
        void copia(PILA& a,PILA& b);
        unsigned desp(){return desplazamiento;};
        unsigned tope(){return t_max;}
        ~PILA(){delete []stack;}
    private:
        typo *stack;
        unsigned t_max, desplazamiento=-1;
};

template<typename typo>
PILA<typo>::PILA(int size):t_max(size) {
    stack = new typo[t_max];
    desplazamiento=0;
}

template<typename typo>
void PILA<typo>::push(const typo &x) {

    stack[desplazamiento]=x;
    desplazamiento++;

}

template<typename typo>
typo PILA<typo>::pop() {
    assert(!(desplazamiento<0));
    desplazamiento--;

    return stack[desplazamiento];
}

template<typename typo>
bool PILA<typo>::vacia() const {
    if (desplazamiento<0){
        return true;
    }
    else{
        return false;
    }
}

template<typename typo>
bool PILA<typo>::llena() const {
    if (desplazamiento==t_max){
        return true;
    }
    else{
        return false;
    }
}
//Copia en b la pila a
template<typename typo>
void PILA<typo>::copia(PILA& a,PILA &b) {
    if (b.t_max!=a.t_max){
        b.t_max=a.t_max;
    }
    for (int i=0;i<b.t_max;i++)
        b.push(a.stack[i]);
    }

#endif //PILA_GENERICA_PILA_H
