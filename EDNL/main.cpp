#include <iostream>
#include "tads/arbolbinenla.h"
#include "tads/arbolbinvect.h"
#define ednl std::endl
using namespace std;

int main() {
    Abin<int>tree;
    tree.insertarRaizB(1);
    //0
    tree.insertarHijoDrchoB(tree.raizB(),2);
    tree.insertarHijoIzqdoB(tree.raizB(),3);
    //1
    tree.insertarHijoIzqdoB(tree.raizB()->hizq,4);
    tree.insertarHijoIzqdoB(tree.raizB()->hder,5);
    tree.insertarHijoDrchoB(tree.raizB()->hder,6);

    //cout<< tree.raizB()->hder->hder->elto<<endl;
    cout<<tree.altura_mia(tree.raizB())<<ednl;

    return 0;
}
