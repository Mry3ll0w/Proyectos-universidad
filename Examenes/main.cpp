#include <iostream>
#include "HOSPITAL.h"
#include "Cocina.h"
#include "TREN.h"
#include "diccionario.h"
#include "TEXTO.h"
#include "symbol.h"

using namespace std;
int n_aleatorio(int a, int b){
    return (rand()%(b-a+1)+a);
}

int main(){
    trazo t[4];
    simbolo s;
    t[0].ruta="derecha";
    t[1].ruta="izquierda";
    t[2].ruta="abajo";
    t[3].ruta="arriba";
    for (int i = 0; i <3 ; ++i) {
       // s.add_trazo(t[i]);
        s.print_trazo(t[i]);
    }

    return 0;
}
