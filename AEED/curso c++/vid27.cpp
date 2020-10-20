#include <iostream>
using namespace std;
//2¹ + 2² + 2³ + ..... n veces
long int function(int);
int main(){
    int n;
    cout<<"Introduce el valor de n"<<endl;
    cin>>n;
    cout<<"Resultado "<<function(n)<<endl;

return 0;
}

long int function(int n){
    long int result=0;int a=2;
    for (int i = 1; i <=n; i++)
    {
        result+=a;
        a=a<<i;
    }
    return result;

}