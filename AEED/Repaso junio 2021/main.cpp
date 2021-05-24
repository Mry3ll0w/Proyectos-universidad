#include <iostream>
#include "practica3.hpp"
#include "practica5.hpp"
#include "practica6.hpp"
#include "tad_texto.hpp"
#include "tad_infijo.hpp"
#include "tad_dict.hpp"
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
   
    cout<<op_infjo("12+3+")<<endl;

    return 0;
}

