#include <iostream>
using namespace std;

int main(){
  char car;int int_char;
  cout << "Introduce el caracter deseado" <<endl;  
  cin >> car;
  int_char =car;
  
  if(int_char >=65 && int_char <=90){
    cout<<"Es una mayuscula"<<endl;
  }
  else
  {
    cout<<"no es una mayuscula"<<endl;
  }
  
    return 0;
}