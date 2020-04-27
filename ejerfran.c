/*
3.Identifique y corrija los errores y omisiones que contiene el siguiente
programa. Asegúrese de que devuelve el resultado correcto para
cualquier entrada válida.
*/
/* Media de un número indefinido de valores enteros positivos */
#include <stdio.h>
#include <stdlib.h>
//#define centinela = 0 Cuando definimos una constante no usamos = , simplemente lo ponemos al lado 
# define  centinela 0
int main()
{
 int valor=1, suma=0; // valor debe tener un numero asignado !=0 para entrar en el bucle ya que este acaba cuando valor = 0
 int i=0; // I debe tener asignado un valor para asi poder ser mostrado en el printf de la linea 17
 	while (valor != centinela){ //while (!(valor = centinela)) tal como estaba definido es infinito 
	 	//suma = suma + valor; la suma debe realizarse despues de introducir el valor 
 		printf ("Introduce el valor %d: ", i+1);
 		scanf ("%d",&valor);
         suma = suma + valor;
         // En ningun momento se incrementa i lo cual hace erronea la media 
         i++;
 	}
     float media= (float)(suma)/(float)(i);
	if (i = 0) printf ("La media es %d\n", suma);
 	else printf ("La media es %f\n", media);
     	
         system ("pause");
 	    return 0;
}
