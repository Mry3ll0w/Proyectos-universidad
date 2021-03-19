#include <iostream>
#include "fecha.hpp"
#include "cadena.hpp"
#include <ctime>
using namespace std;//Avoid using std:: ....

int main(){
     Fecha a,b(3,3,2000),c(b);
     c.show_date();
     
     return 0;
}