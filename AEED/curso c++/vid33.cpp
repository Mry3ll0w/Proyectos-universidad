#include <iostream>

using namespace std;

int biggest(int *,int);

int main(){
    int v[]={4,6,8,11,3,2};
    cout << biggest(v,6) << endl;
    return 0;
}

int biggest(int *v,int size){
    int max=v[0];
    for(int i=0;i<size;i++){
        if(v[i]>max){
            max=v[i];
        }    
    }
    return max;   
}