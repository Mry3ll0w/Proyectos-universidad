#include <iostream>
#include "HOSPITAL.h"
#include "Cocina.h"
#include "TREN.h"
#include "diccionario.h"
using namespace std;
int n_aleatorio(int a, int b){

    return (rand()%(b-a+1)+a);

}

int main() {
    diccionario dict;
    traduccion t[3];
    t[0].translation="hello";
    t[1].translation="hey";
    t[2].translation="bye";
    dict.insert_word("hola");dict.insert_word("adios");
    dict.insert_translate("hola",t[0]);
    dict.insert_translate("hola",t[1]);
    dict.list_tranlation("hola");

    dict.erase_tranlation("hey");

    dict.list_tranlation("hola");
    return 0;
}
