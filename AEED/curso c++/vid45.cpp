#include <iostream>
#include<algorithm>//To make the reversing of the string (using c++)
#include <string>
using namespace std;//Avoid using std:: ....

int main(){
    string cad,dac;
    cout<<"Insert a string"<<endl;
    getline(cin,cad);
    dac=cad;
    reverse(dac.begin(),dac.end());//Reversing the string
    cout<<"The reverse string is : "<<dac<<endl;
    
  return 0;
}