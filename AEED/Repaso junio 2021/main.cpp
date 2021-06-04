#include <iostream>
#include "practica3.hpp"
#include "practica5.hpp"
#include "practica6.hpp"
#include "tad_texto.hpp"
#include "tad_infijo.hpp"
#include "tad_dict.hpp"
#include "tad_simbolo.hpp"
#include <string>
#include <algorithm>

template<typename t>
void show_list(ListaEnla<t>&l){
    for (auto i = l.primera(); i!=l.fin(); i=l.siguiente(i))
    {
       std::cout<<l.elemento(i)<<", ";
    }
   std::cout<<std::endl;
}

int main(){

    ListaEnla<int>n;
    n.insertar(1,n.fin());
    n.insertar(2,n.fin());
    n.insertar(3,n.fin());
    if (n.buscar(9)==n.fin())
    {
        std::cout<<"igual al fin\n";
    }
    else if (n.buscar(2)==n.fin())
    {
        std::cout<<"no igual al fin\n";
    }
    
    
    return 0;
}

