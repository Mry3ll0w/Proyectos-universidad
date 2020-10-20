#include <iostream>
#include <string>
using namespace std;//Avoid using std:: ....
int vowels(string);
int main(){
    string str;
    cout<<"Input a phrase to count the vocals in it"<<endl;
    getline(cin, str);
    cout<<"The quantity of vocals in the phrase is "<<vowels(str)<<endl;
  return 0;
}
/**********************************
Function declaration ==> int vowels (string)
Preconditions ==> Receives an initialized string 
Postconditions ==> return the number of existing vowels in the phrase
**********************************/
int vowels (string cad){
    int v = 0;int aux;
    for (int i = 0; i < cad.length(); i++)
    {
        aux=cad[i];
        if (cad[i] == 'a'|| cad[i] == 'e'|| cad[i] == 'i'|| cad[i] == 'o'|| cad[i] == 'u')
        {
            v++;
        }
    }
    return v;

}