#include<iostream>
#include "cronometro.h"
#include<algorithm>
using namespace std;

void insertion_sort(int v[],int size);
//Forma de cronometrar los algoritmos EX analisis
int main(){
	cronometro c;
	long int r=0;
	const double e_abs=0.01,e_rel=0.001;
	int v[9]={6,24,28,12,56,7,5,89};
	c.activar();
	do{
		insertion_sort(v,9);
		random_shuffle(v,v+9);
		r++;
	}while(c.tiempo()<e_abs/e_rel+e_abs);
	c.parar();
	double t=c.tiempo()/r;
	cout<<"El tiempo es "<<t<<endl;
	return 0;
}

void insertion_sort(int v[],int size) 
{

for(int i=0;i<size;i++)
	{
			int temp=v[i];
			int j=i-1;
			while(j>=0 && v[j]>temp)
			{
						v[j+1]=v[j];
						j--;
			}
			v[j+1]=temp;
	}
}
