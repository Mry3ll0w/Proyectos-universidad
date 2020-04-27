#include <stdio.h>
#include <stdlib.h>
/*
Implementa un programa que dadas dos cadenas de caracteres, a través de un menú de
opciones, realice las siguientes operaciones:
    1.- Comparacion cadenas.(diga si son iguales)
    2.- Copia de la primera sobre la segunda
    3.- Concatenacion de ambas cadenas
    4.- Calculo de la longitud de las cadenas
*/

int comp_cad(char *a, char *b);//ok
void cp_cad(char *a, char *b);//ok
void conc_cad(char *a, char*b);//ok
int long_cad(char *cad);//ok

int main(){
    char a[20],b[20];int opciones,sel;
        printf("Introduce la cadena 1\n");
            scanf("%s",a);
        printf("Introduce la segunda cadena2\n");
            scanf("%s",b);
            printf("1)Comparacion de cadena\n");
            printf("2)Copia de la primera sobre la segunda\n");
            printf("3)Concatenacion de ambas cadenas\n");
            printf("4)Calculo de la longitud de las cadenas\n");
        printf("elige una opcion valida\n");
            scanf("%i",&opciones);
            switch (opciones)
            {
            case 1:
                if(comp_cad(a,b)==0){printf("Las cadenas son iguales\n");}
                else{printf("Son distintas\n");}
                break;
             case 2:
               cp_cad(a,b);
               printf("La cadena copiada es: %s\n",a);
                break;
             case 3:
                conc_cad(a,b);
                printf("La cadena concatenada es: %s\n",a);
                break;
             case 4:
                printf("Selecciona que cadena quieres medir\n");
                printf("1)Primera cadena\n2)Segunda cadena\n");
                    scanf("%i",&sel);
                    if(sel==1){
                        
                        printf("El size de a es: %i\n",long_cad(a));}
                    else
                    {
                        
                        printf("El size de b es: %i\n",long_cad(b));
                    }
                    
                break;
            
            default:
             printf("La opcion no es valida\n");
                break;
            }
return 0;
}

int comp_cad(char *a, char *b){
   int aux=0,ax,bx,i=0;//Devuelve 1 si no es igual
    if(sizeof(a)!=sizeof(b)){
        aux=1;
        printf("Tiene tamaño distinto\n");
    }
    else
    {
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
        return aux;
        
    }
    

}

void cp_cad(char *a, char *b){
    int i=0;
    for ( i = 0; i <sizeof(b); i++)
    {
        a[i]=b[i];
    }
}

void conc_cad(char *a, char*b){
     int i=0,j=0;
        while (a[i]!='\0')
        {
            i++;
        }
        printf("Valor de I=%i\n",i);

        while(b[j]!='\0'){
                a[i]=b[j];
                i++;
                j++;
        }
}

int long_cad(char *cad){
    int i=0;
    while(cad[i]!='\0'){
        i++;
    }
   
    return i;
}


