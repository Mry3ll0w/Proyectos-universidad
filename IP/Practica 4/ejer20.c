#include <stdio.h>
#include <stdlib.h>
/*
Write the function int count( char * str, char c) that returns the number of times the
character c appears in the str string
*/
int count( char * str, char c);
int main(){
    int occurences;
    char c, str[20];
        printf("Introduce the character u wanna look for\n");
            scanf("%c",&c);
        printf("Now Introduce the string where u are going to look the character\n");
            scanf("%s",str);
            occurences=count(str,c);
        printf("The character appears %i times\n",occurences);

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