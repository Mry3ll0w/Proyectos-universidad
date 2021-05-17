#include <iostream>
#include "practica3.hpp"
#include "practica5.hpp"
#include "practica6.hpp"
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
    num_binario n("00001");
    num_binario a("11110");
    n.show();
    n.shift_left(2);
    //std::cout<<std::endl;
    n.show();
    return 0;
}
