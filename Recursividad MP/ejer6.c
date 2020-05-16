#include <stdio.h>
#include <stdlib.h>

// Diseña una función recursiva que determine si en un vector A de n enteros existen
// dos parejas consecutivas de elementos tales que sus sumas sean idénticas.
//Devuelve un numero>0 si existe una pareja consecutiva y cuantas hay 
int recursiva(int vec[], int size);

int main(){
    int vec[10]={1,1,6,1,-3,3,1,4,2,5};
    printf("%i\n",recursiva(vec,10));
}

int recursiva(int vec[],int size){
    
    //Condicion para contar parejas con esa Condicion
    if ((vec[size]+vec[size-1])==(vec[size-2]+vec[size-3]))
    {
        
        return 1;
        
    }
    
    //caso general==> Sale del bucle cuando sea menor que 4 ya que necesitas minimo 2 parejas
    //Devuelve 0 ya que si no encontrase dichas parejas antes de eso significa que no hay parejas
    if (size<3)
    {
        return 0;
    }
    
    recursiva(vec,size=size-1);

}