#include <iostream>
#include "tads/arbolbinenla.h"
#include "tads/practica2.h"
#include "tads/arbolbinvect.h"
#include "tads/funciones_abin.h"
#define ednl std::endl
using namespace std;

int main() {
    Abin<int>tree,tree2;
    tree.insertarRaizB(1);
    //0
    tree.insertarHijoDrchoB(tree.raizB(),2);
    tree.insertarHijoIzqdoB(tree.raizB(),3);
    //1
    tree.insertarHijoIzqdoB(tree.raizB()->hizq,4);
    tree.insertarHijoIzqdoB(tree.raizB()->hder,5);
    tree.insertarHijoDrchoB(tree.raizB()->hder,6);

    //Arbol 2
    tree2.insertarRaizB(1);
    //0
    tree2.insertarHijoDrchoB(tree2.raizB(),2);
    tree2.insertarHijoIzqdoB(tree2.raizB(),3);
    //1
    tree2.insertarHijoIzqdoB(tree2.raizB()->hizq,4);
    tree2.insertarHijoIzqdoB(tree2.raizB()->hder,5);
    tree2.insertarHijoDrchoB(tree2.raizB()->hder,6);




    return 0;
}
