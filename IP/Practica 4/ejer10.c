#include <stdio.h>
#include <stdlib.h>
/*
Write a program in C to create and print out the transpose matrix of a given matrix of
integers.
*/
int main(){
    int i,j,it1,it2;
        printf("Introduce the measures of the matrix\n(first rows and secondly the cols)\n");
            scanf("%i",&i);
            scanf("%i",&j);
        int matrix[i][j];
        printf("Now Introduce the elements of the matrix\n");
            for ( it1 = 0; it1 < i; it1++)//For the rows
            {
                for ( it2 = 0; it2 < j; it2++)
                {
                    scanf("%i",&matrix[it1][it2]);    
                }
                
            }
            printf("Printing the transpose matrix \n");
                 for ( it1 = 0; it1 < j; it1++)//For the rows
            {
                for ( it2 = 0; it2 < i; it2++)
                {
                    printf("%i ",matrix[it2][it1]);    
                }
                printf("\n");
            }

return 0;
}