#include <iostream>
#include "fecha.hpp"
#include "Cadena.hpp"
#include <ctime>
using namespace std;//Avoid using std:: ....

int main(){
     Cadena c{"hola"},d{"qwertt"},a{'a',3};
     c.show();
     d.show();
     a.show();
     return 0;
}