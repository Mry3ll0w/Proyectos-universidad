#include <iostream>
using namespace std;
/*
----------------------------------------------------------------
Programa que realize la suma de los cuadrados de los 10 enteros 
mayores que 0.
----------------------------------------------------------------
*/
int funcion(int);
int main(){
    cout<<"Resultado= "<<funcion(0)<<endl;
return 0;
}

int funcion(int res){
    int i;
    for (i=1;i<=10;i++){
        res +=(i*i);
    }
    return res;
}