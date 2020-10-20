#include <iostream>
#include <string>
using namespace std;//Avoid using std:: ....

//Basic string management
int main(){
    char str[]="cadena fija";
    string strin;
    cout<<str<<endl;
    cout<<"Introduce que me quieres decir con espacios"<<endl;
    getline(cin, strin);
    cout<<"lo introducido es ==>"<<strin<<endl;
    return 0;
}