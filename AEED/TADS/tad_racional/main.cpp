#include <iostream>
#include "racional.h"
using namespace std;
int main() {
    cout<<"Implementacion basica de un TAD"<<endl;
    racional n1(5,8);
    racional n2(7,8);
    racional n3(1,1);

    n3=n1+n2;
    n3.print_rac();
    return 0;
}
