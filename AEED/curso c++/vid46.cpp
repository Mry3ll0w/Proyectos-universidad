#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;//Avoid using std:: ....

int main(){
    string str;
    cout<<" Introduce una cadena (en minusculas) "<<endl;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        str[i]=toupper(str[i]);
    }
    cout<<str<<endl;
  return 0;
}