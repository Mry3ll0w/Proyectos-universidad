#include <iostream>
#include "fecha.hpp"
#include "Cadena.hpp"
#include <ctime>
using namespace std;//Avoid using std:: ....

int main(){
     Cadena c("hola"),d("hola");
     c+=d;
     c.show();
     cout<<c.length()<<endl;
     return 0;
}