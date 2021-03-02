#include <iostream>
#include "tads/arbolbinenla.h"
#include "tads/arbolbinvect.h"
#define ednl std::endl
using namespace std;
bool abin_pseudocomplete(Abin<int> a);
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


    cout<<tree.altura_mia(tree.raizB())<<ednl;
    cout<<tree.desequilibrio(tree.raizB(),0)<<endl;

    return 0;
}
bool abin_pseudocomplete(Abin<int> a, Abin<int>::nodo n){
    //FALTA IMPLEMENTARLO
}
