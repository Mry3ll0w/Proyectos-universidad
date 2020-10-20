#include <iostream>
using namespace std;
//Algoritmo ruso de la multiplicacion

int main(){
    int a,b;
    cout << "Introduce el valor de a " <<endl;
    cin>> a;
    cout << "Introduce el valor de b"<<endl;
    cin>> b;

    int result = 0; 
    while (b)
    {
        if (b & 1)
            result = result + a;	
        a = a << 1;
        b = b >> 1;
    }
cout<<"resultado = " << result << endl;
return 0;
}