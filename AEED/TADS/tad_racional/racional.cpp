//
// Created by anton on 09/11/2020.
//
#include"racional.h"
#include <cassert>
#include <iostream>
long int racional::mcd(int x, int y){
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
}
//ok
racional::racional(int n, int d) :numerador(n),denominador(d){ //: se usa para asignarle valores a variable privada
    assert(d!=0);
    if(n<0){
        numerador*=-1;//cambiamos de posicion el negativo ya que generalmente es colocado en el
        denominador*=-1;
    }
    //Reduccion de la fraccion
    long int m = mcd(n,d);
    if(m!=1){
        numerador/=m;
        denominador/=m;
    }
}//ok

racional racional::destroy() {
    return racional(0, 1);
} //Por implementar
racional racional::print_rac(){
    racional e(numerador,denominador);
    cout<<"El racional introducido es"<<endl;
    cout<<e.num()<<"/"<<e.den()<<endl;
}//ok

long int racional::mcm(int x, int y) {
    long int mcm =0;
    int a = max(x,y);
    int b = min(x,y);
    mcm = (x/mcd(x,y))*y;
    return mcm;
}//ok

racional operator +(const racional &a, const racional &b) {
    racional res(1,1);
    if(a.denominador==b.denominador){
        res.numerador=a.numerador+b.numerador;
        res.denominador=a.denominador;
    }
    else{
        //long int denom=mcm(a.denominador,b.denominador);//Falta por implementar mcm

    }
    return res;
}



