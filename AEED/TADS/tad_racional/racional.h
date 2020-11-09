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
        racional (int nu=0,int de=1);
        long num() const {return n;}
        long den() const {return d;}
        racional sum(racional,racional);
        //Sobrecarga de operadores para que realize de forma automática los operadores específicos
        racional destroy();
        racional print_rac();

    private:
        long n,d;
        int mcd(int,int);
};

#endif //TAD_RACIONAL_RACIONAL_H
racional::racional (int n,int d){
    if(d==0){
        cout<<"El denominador introducido no es valido, debe ser distinto de 0"<<endl;
    }
    if(n<0){
        n*=-1;//cambiamos de posicion el negativo ya que generalmente es colocado en el
        d*=-1;
    }
    //Reduccion de la fraccion
    long int m = mcd(n,d);
    if(m!=1){
        n/=m;
        d/=m;
    }
}//ok

int mcd(int x,int y){
    long int a;
    // Algoritmo de Euclides
    if (x < y)
    {
        a = x;
        x = y;
        y = a;
    }
    while ((a = x % y))
    {
        x = y;
        y = a;
    }
    return y;
}//ok

racional print_rac(){
    racional e;
    cout<<"El racional introducido es"<<endl;
    cout<<e.num()<<"/"<<e.den()<<endl;
}