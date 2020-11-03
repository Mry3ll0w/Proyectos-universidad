#include<iostream>
#include "cronometro.h"
#include "ordenes.h"
#include<algorithm>
using namespace std;


//Forma de cronometrar los algoritmos EX analisis
int main(){
	cronometro c1,c2,c3;
	long int r=0;
	const double e_abs=0.01,e_rel=0.001;
	int v[9]={6,24,28,12,56,7,5,89};

	c1.activar();
	do{
		insertion_sort(v,9); //SE llama al algoritmo de orden
		random_shuffle(v,v+9); // Se desordena el vector
		r++;
	}while(c1.tiempo()<e_abs/e_rel+e_abs);
	c1.parar();
	double t1=c1.tiempo()/r;
	cout<<"El tiempo de insertion_sort es: "<<t1<<endl;

	c2.activar();
    do {
        bubble_sort(v,9);
        random_shuffle(v,v+9);
        r++;
    }while(c2.tiempo()<e_abs/e_rel+e_abs);
    c2.parar();
    double t2=c2.tiempo()/r;
    cout<<"El tiempo de bubble_sort es: "<<t2<<endl;

    c3.activar();
    do {
        direct_selection_sort(v,9);
        random_shuffle(v,v+9);
        r++;
    }while (c3.tiempo()<e_abs/e_rel+e_abs);
    c3.parar();
    double t3=c3.tiempo()/r;
    cout<<"El tiempo de direct_selection_sort es "<<t3<<endl;

	return 0;
}


