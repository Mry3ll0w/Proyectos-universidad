#include <iostream>
#include <string>
using namespace std;//Avoid using std:: ....
//Copy one string into another
int main(){
    string cad1,cad2;int opt;
    cout << "Introduce a string for me :) "<<endl;
    getline(cin,cad1);
    cout << "Introduce another string for me :) "<<endl;
    getline(cin,cad2);
    cout << "1)Copy the first string into the second string"<<endl;
    cout << "2)Copy the second string into the first string"<<endl;
    cin>>opt;
    if (opt==1)
    {
        cad1.append(cad2);
        cout<<"Resoult: "<<cad1<<endl;
    }else
    {
        cad2.append(cad1);
        cout<<"Resoult: "<<cad2<<endl;
    }
    
    
  return 0;
}