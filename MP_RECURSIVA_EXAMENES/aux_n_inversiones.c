#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int mayores(int x, int *v, int n);
int inversiones(int *v,int n);
//"JetBrainsMono NF", Consolas, 'Courier New', monospace
int main(){
  
  
  return 0;
}

int mayores(int x, int *v, int n){
    int r;
    if (n == 0)
    {
      r = 0;
    }
    else{
        if (x < v[n])
        {
          r = mayores(x,v,n-=1)+1;
        }
        else
        {
          mayores(x,v,n-=1);
        }
    }
}

int inversiones(int *v,int n){
  int r;
  if (n==0){
      r = 0;
  }
  else{
    r = inversiones(v,n-=1)+mayores(v[n],v,n-=1);
  }
}