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

int main(){
    Texto txt;
    txt.insert_word("La");
    txt.insert_word("pii@la");
    txt.show_text();

    return 0;
}
