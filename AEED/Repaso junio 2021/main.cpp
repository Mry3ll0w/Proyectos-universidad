#include <iostream>
#include "practica3.h"

int main(){
    Linea_Texto a;
    a.insertar_caracter('a');
    a.insertar_caracter('b');
    a.insertar_caracter('c');
    a.insertar_caracter('d');
    a.show_text();
    a.retrasar_cursor(2);//solucion invertir
    a.show_text();
    return 0;
}

