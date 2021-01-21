#include <iostream>
#include "HOSPITAL.h"
#include "Cocina.h"
#include "TREN.h"
#include "diccionario.h"
#include "TEXTO.h"
using namespace std;
int n_aleatorio(int a, int b){
    return (rand()%(b-a+1)+a);
}

int main() {
    palabra palabras[4];
    palabras[0].id=1;
    palabras[0].p_original="pii@bes";
    Texto txt;
    txt.insert_word(palabras[0]);


    return 0;
}
