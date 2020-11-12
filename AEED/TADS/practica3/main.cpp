#include "racional.h"
#include "polinomio.h"
using namespace std;
int main() {
    int gmax=4;
    unsigned g[]={1,2,3,4};
    double c[]={1,2,3,4};
    polinomio p1(gmax,c,g);
    p1.print_pol();
    cout<<"Grado del polinomio : "<<p1.grado()<<endl;
    cout<<"Coeficiente 3 es : "<<p1.coeficiente(3)<<endl;
    p1.coeficiente(3,23.5);
    p1.print_pol();

    p1.~polinomio();
    return 0;
}
