// Created by anton on 17/11/2020
#ifndef PILA_GENERICA_PILA_H
#define PILA_GENERICA_PILA_H
#include <cassert>
#include <iostream>
template <typename typo>
class PILA {
    public:
        explicit PILA(int size);
        void push (const typo& x);
        void pop ();
        bool vacia()const;
        bool llena()const;
        ~PILA(){delete []stack;}

    private:
        typo *stack;
        unsigned t_max, desplazamiento;
};

template<typename typo>
PILA<typo>::PILA(int size):t_max(size) {
    stack = new typo[t_max];
    desplazamiento=-1;
}

template<typename typo>
void PILA<typo>::push(const typo &x) {
    assert(desplazamiento>t_max);
    stack[desplazamiento]=x;
    desplazamiento++;
}

template<typename typo>
void PILA<typo>::pop() {
    assert(!(desplazamiento<0));
    desplazamiento--;
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

#endif //PILA_GENERICA_PILA_H
