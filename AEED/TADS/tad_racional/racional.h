//
// Created by anton on 09/11/2020.
//
#ifndef TAD_RACIONAL_RACIONAL_H
#define TAD_RACIONAL_RACIONAL_H
#include <iostream>
#include <cassert>
using namespace std;
/*
 * Implementacion de la clase racional :
 * Como precondicion la clase no puede tener un denominador =0, ya que si no su resultado (a/b) sería infinito
 * Se implementarán las operaciones básicas:
 * suma,resta,multiplicacion y division
 * */
class racional{
    public:
        explicit racional(int n,int d);
        long num() const {return n;}
        long den() const {return d;}
        racional sum(racional,racional);
        //Sobrecarga de operadores para que realize de forma automática los operadores específicos
        racional destroy();
        racional print_rac();

    private:
        int mcd(int,int);
        long n,d;


};

#endif //TAD_RACIONAL_RACIONAL_H
