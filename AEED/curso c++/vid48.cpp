#include <iostream>
#include <string>
using namespace std;//Avoid using std:: ....

int main(){
    string number;int n;
    cout<<"Introduce a number "<<endl;
    getline(cin, number);
    n=stoi(number); // tambien vale atoi(number.c_str())
    cout<<n<<endl;
  return 0;
}