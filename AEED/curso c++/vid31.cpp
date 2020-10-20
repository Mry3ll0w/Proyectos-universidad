#include<iostream>
#include<curses.h> //curses = conio en linux
using namespace std;

int main(){
    int v[]={2,5,6,3,8,6};
    int result=1;
    for (int i=0;i<(sizeof(v)/sizeof(int));i++){
        result*=v[i];
    }
    cout << result<<endl;

    
    return 0;
}