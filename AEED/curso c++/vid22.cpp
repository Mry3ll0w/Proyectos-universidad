#include <iostream>
using namespace std;
/*Ejercicio del video 22 pero con el algoritmo ruso de la multipl*/
void mult_table(int,int);
int main(){
    int n;
    cout<<"Introduce el numero del que quieras saber la tabla"<<endl;
    cin>>n;

    for (int i = 1; i < 11; i++)
    {
        mult_table(n,i);
    }

    return 0;
}

void mult_table(int num,int b){
     static int cont=0;//Cuestion de estetica para ver ax1=a ................
    int a=num;
    int result=0;
    while (b)
    {
        if (b & 1)
            result = result + a;
        a = a << 1;
        b = b >> 1;
    }
    cont++;
    cout<<num<<"x"<<cont<<"="<<result<<endl;
}
