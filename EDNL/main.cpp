#include <iostream>
#include "tads/arbolbinenla.h"
#include "tads/practica2.h"
#include "tads/arbolbinvect.h"
#include "tads/funciones_abin.h"

using namespace std;

int main() {
    Abin<int>tree;
    Abin<string>tree2;
    tree.insertarRaizB(1);
    //0
    tree.insertarHijoDrchoB(tree.raizB(),2);
    tree.insertarHijoIzqdoB(tree.raizB(),3);
    //1
    tree.insertarHijoIzqdoB(tree.raizB()->hizq,4);
    tree.insertarHijoIzqdoB(tree.raizB()->hder,5);
    tree.insertarHijoDrchoB(tree.raizB()->hder,6);

    //Arbol 2
    tree2.insertarRaizB("/");
    //0
    tree2.insertarHijoDrchoB(tree2.raizB(),"2");
    tree2.insertarHijoIzqdoB(tree2.raizB(),"3");
    //1
    cout<<Evaluar_llamada(tree2)<<endl;



    return 0;
}
