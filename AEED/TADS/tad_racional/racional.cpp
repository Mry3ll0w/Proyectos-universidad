//
// Created by anton on 09/11/2020.
//
#include"racional.h"
#include <cassert>
#include <iostream>

racional::racional(int n,int d){
    bool crea= true;
    if(d==0){
        cout<<"El denominador introducido no es valido, debe ser distinto de 0"<<endl;
        crea=false;
    }
    assert(crea);
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
}

int racional::mcd(int x, int y){
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


racional racional::print_rac(){
    racional e(n,d);
    cout<<"El racional introducido es"<<endl;
    cout<<e.num()<<"/"<<e.den()<<endl;
}

racional racional::destroy() {
    return racional(0, 1);
}
