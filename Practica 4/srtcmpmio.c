#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[3]="ara";
    char b[3]="ara";
    char ax,bx;
        int i=0,aux=0;
        while(i<sizeof(a)){
            
            ax=a[i];
            bx=b[i];
            printf("ax=%i\tbx=%i\n",ax,bx);
                if(ax==bx){
                    aux=0;
                }
                else{
                    aux=1;
                }
                i++;
        }
        printf("%i",aux);
}