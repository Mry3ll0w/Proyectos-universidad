#include <iostream>
using namespace std;
//serie fibonacci 1+2+3+4+5+6+7+8+9
int main(){
    int n,x=0,y=1,z=0;
    cout << "Introduce el valor de n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        z= x+y;
        cout<<z<<", ";
        x=y;
        y=z;
    }
    cout<<endl;
return 0;
}