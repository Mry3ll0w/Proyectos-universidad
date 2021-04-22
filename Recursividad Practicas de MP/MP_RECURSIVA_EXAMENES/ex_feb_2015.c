#include <stdlib.h>
#include <stdio.h>
// Funcion que determine si dos elementos de dicho vector suman un numero X
int func_suma(int v[],int size,int x);

int main(){

   return 0;
}

int func_suma(int v[],int size, int x){
    
    if (size < 2)
    {
        return 0;//Si no es asi
    }
    

    if((v[size-1]+v[size-2])==x){
        return 1;
    }

    func_suma(v,size-=1,x);
}
