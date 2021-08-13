#include <iostream>
using namespace std;//Avoid using std:: ....
#include "examenes/estacion_tren.h"
#include "tads p/ListaEnla.h"

int main(){
    ListaEnla<int> a;
    a.insertar(0,a.fin());
    a.insertar(1,a.fin());
    a.insertar(2,a.fin());
    a.insertar(3,a.fin());
    a.insertar(4,a.fin());
    auto i = a.primera();
    while(i != a.fin()){
        std::cout<<a.elemento(i)<<std::endl;
        i = a.siguiente(i);
    }
}