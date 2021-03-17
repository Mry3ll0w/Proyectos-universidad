#include <iostream>
#include "fecha.hpp"
#include "Cadena.hpp"
#include <ctime>
using namespace std;//Avoid using std:: ....

int main(){
     Cadena c{"hola"},d{"qwert"};
     cout<<c.length()<<", "<<d.length()<<endl;
     c.show();
     d.show();
     return 0;
}