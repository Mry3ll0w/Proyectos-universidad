#include <stdlib.h>
#include <stdio.h>

/*
Write a function to find majority character and determine how many times it appears
*/
int count( char * str, char c);
int main(){
  int occurences,imax,iaux,i=0;
    char str[20],cmax;

        printf("Now Introduce the string where u are going to look the character\n");
            scanf("%s",str);
            
             cmax=str[i];
        while ((str[i]!='\0')&&(i<20)){
            imax=count(str,str[i]);
            iaux=count(str,str[i+1]);
            if (imax<iaux){
                cmax=str[i+1];
                imax=iaux;
            }
            i++;
        }
        printf("The majority character %c\n",cmax);

    return 0;
}
int count( char * str, char c){
    int i=0,cont=0;
        while (str[i]!='\0')
        {
            if (str[i]==c)
            {
                printf("Valor de cont %i\n",cont);
                cont++;
            }
            i++;
            
        }
        return cont;
}