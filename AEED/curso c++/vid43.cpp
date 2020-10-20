#include <iostream>
#include <string>
using namespace std;//Avoid using std:: ....
//Compare strings
int main(){
    string cad1,cad2;
    cout << "Introduce a string for me :) "<<endl;
    getline(cin,cad1);
    cout << "Introduce another string for me :) "<<endl;
    getline(cin,cad2);
    if(cad1.compare(cad2)==0){
        cout << "They are the same string "<<endl;
    }
    else
    {
        cout << "They are different strings "<<endl;
    }
    
  return 0;
}