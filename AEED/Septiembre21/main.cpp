#include <iostream>
using namespace std;//Avoid using std:: ....
#include "tad_texto.hpp"

int main(){
     texto a("El pepee@");
     a.insertar("abuelo#");
     a.insertar("Ete setchu@u");
     
     a.show_input();
     a.mostrar_texto();
     
     
     
     return 0;
}