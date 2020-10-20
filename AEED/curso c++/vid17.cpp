#include<iostream>
//Conversor a numeros romanos hasta millares 
using namespace std;

void conversor(int);

int main(){
    int n;
    cout<<"Introduce el numero (0 al 9999) que deseas convertir"<<endl;
    cin>>n;
    conversor(n);

return 0;
}

void conversor(int numero){
    int unidades,decenas,centenas,millar,aux;
    
    if (numero>0 && numero<10000)
    {
        aux=numero;
        switch (numero){
            case (numero>=1000):
            
                for (int i = 0; i < 4; i++)
                {
                    switch (i){
                    case 0: unidades = aux%10; break;
                    case 1: decenas = aux%10;  break;
                    case 2: centenas = aux%10; break;
                    case 3: millar = aux%10;   break;
                    }
                    aux/=10;
                }    
            break;

            case (numero>100&&numero<1000):
        
                for (int i = 0; i < 2; i++)
                {
                    switch (i){
                        case 0: unidades = aux%10; break;
                        case 1: decenas = aux%10;  break;
                        case 2: centenas = aux%10; break;
                    }
                    aux/=10;
                }
                millar=0;
            break;

            case (numero>10&&numero<100):
                for (int i = 0; i < 1; i++)
                {
                    switch (i){
                        case 0: unidades = aux%10; break;
                        case 1: decenas = aux%10;  break;
                    }
                    aux/=10;
                }
                centenas=0;
                millar=0;
            break;

            case(numero<10):
                unidades = aux;
                decenas=0;
                centenas=0;
                millar=0;
            break;
        
        
        switch(millar){
            case 1: cout<<"M"; break;
            case 2: cout<<"MM"; break;
            case 3: cout<<"MMM"; cout<<"entro mill"<<endl;break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
            default: cout<<""; break;
        }
        switch(centenas){
            case 1: cout<<"C";break;
            case 2: cout<<"CC"; break;
            case 3: cout<<"CCC";break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
            default: cout<<""; break;
        }
        switch(decenas){
            case 1: cout<<"X";break;
            case 2: cout<<"XX"; break;
            case 3: cout<<"XXX";break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
            default: cout<<""; break;
        }
    
        switch(unidades){
            case 1: cout<<"I";break;
            case 2: cout<<"II"; break;
            case 3: cout<<"III";break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
            default: cout<<""; break;
        }
        cout<<endl;    
    }
    }
        
    else
    {
        cout<<"El numero introducido esta fuera de rango"<<endl;
    }
    
}