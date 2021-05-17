#include <stdlib.h>
#include <stdio.h>
#include "examenes.h"
int main(){
    int v[]={4, 8, 16, 24, 36};
    ex_enero_21(4,v,5,0,1);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i, ",v[i]);
    }
    printf("\n");



    return 0;
}