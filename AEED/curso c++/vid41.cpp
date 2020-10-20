#include <iostream>
#include<string>
using namespace std;//Avoid using std:: ....
//Funcion strlen
int main(){
    string str;
    cout<<"Introuduce una palabra"<<endl;
    getline(cin, str);
    cout<<"The word length is "<<str.length()<<endl;
    
  return 0;
}