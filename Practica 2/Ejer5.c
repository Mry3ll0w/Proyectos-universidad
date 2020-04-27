#include <stdlib.h>
#include <stdio.h>

/*
Realiza un programa que lea dos números por teclado y 
a continuación un carácter que indique la operación aritmética
a realizar con ellos. 
El programa devuelve, por pantalla, el resultado de dicha operación
*/
void res(float a){
    printf("El resultado es %.3f\n",a);
}

int main(void){
    float n1,n2;char op;
        printf("Introduce un numero \n");
            scanf("%f",&n1);
            fflush(stdin);
        printf("Introduce la operacion que desees realizar \n");
            scanf("%c",&op);
            fflush(stdin);
        printf("Introduce el otro numero que desees\n");
            scanf("%f",&n2);
            fflush(stdin);
        switch (op){
        case '+':
            res(n1+n2);
        break;
        case '-':
            res(n1-n2);
        break;
        case '/':
            if(n2){printf("No puedes dividir entre 0\n");break;}
            res(n1/n2);
        break;
        case '*':
            res(n1*n2);
        break;
        
        default:
                printf("La operacion introdcucida no esta en el banco\n");
            break;
        }    

        return 0;



}
