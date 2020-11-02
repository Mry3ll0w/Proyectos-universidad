#include <iostream>
#include <algorithm>
using namespace std;

void bubbl_sort(int v[],int size);
void insertion_sort(int v[],int size);
void direct_selection_sort(int v[],int size);
void print_array(int v[],int size);
//Repaso de los distintos algoritmos de ordenacion
int main(){
				int v[9]={6,67,5,1,82,60,78,90,28};
									bubbl_sort(v,9);
									print_array(v,9);
									random_shuffle(v,v+9);

									insertion_sort(v,9); 	
									print_array(v,9);
									random_shuffle(v,v+9);

									direct_selection_sort(v,9);
									print_array(v,9);


				return 0; 				
}

void bubbl_sort(int v[],int size){
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-1;j++)
		{
			if(v[j]>v[j+1]){
				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}		
		}
	}
}

void insertion_sort(int v[],int size){

	for (int i=0;i<size;i++)
	{
		int temp=v[i];
		int j=i-1;
		while (j>=0 && v[j]>temp){
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=temp;
	} 
}
void direct_selection_sort(int v[],int size){}

void print_array(int v[],int size){
	for(int i=0;i<size;i++){
			cout<<v[i]<<", ";	
	}
	cout<<endl;
}






