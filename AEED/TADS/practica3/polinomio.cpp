//
// Created by anton on 12/11/2020.
//
#include "polinomio.h"

polinomio::polinomio(int grado,const double cocis[], const unsigned gs[]):grado_max(grado) {
    assert(grado_max!=0);
    cocientes = new double [grado_max];
    grados = new unsigned [grado_max];
    for (int i = 0; i < grado_max ; ++i) {
        cocientes[i]=cocis[i];
        grados[i] = gs[i];
    }

}
//Destructor de la clase (elimina espacio en memoria de
polinomio::~polinomio() {
    delete[] grados;
    delete [] cocientes;
}

void polinomio::print_pol() const{
    polinomio pol(grado_max,cocientes,grados);
    for (int i = 0; i < grado_max; ++i) {
        cout<<pol.cocientes[i]<<"x^"<<pol.grados[i];
        if (i!=grado_max-1){cout<<"+";}
    }
    cout<<endl;
}

void polinomio::coeficiente(unsigned int n, double c) {
    polinomio pol(grado_max,cocientes,grados);
    pol.cocientes[n]=c;
}//Bugged




