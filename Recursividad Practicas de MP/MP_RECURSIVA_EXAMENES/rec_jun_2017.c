#include <stdlib.h>
#include <stdio.h>
int fun_votantes(int v[],int size);

int main(){
    int v[]={3,2,1,1};
    printf("%d\n",fun_votantes(v,4));
  return 0;
}

//aux empieza con v[0]
int mayor_vec(int v[],int size, int aux){
    size-=1;
    if (size<1){
        return aux;
    }
    if (aux < v[size])(aux=v[size]);
    mayor_vec(v,size-=1,aux);
}

int sum_votos (int v[], int v2[], int size){
    
    if(size < 1){
        return 0; // Realmente no devolvemos nada pero no puedo poner un void ya que es recursiva
    }

    if (v[size-1]!=size-1)
    {
        v2[v[size-1]]++;
    }
    
    sum_votos(v,v2,size-=1);
}
int vec_initializer(int v[], int size){
    if ((size-1)< 0)
    {
        return 0;
    }

    v[size-1]=0;
    
    vec_initializer(v,size-=1);
}

/*
Dado  un  conjunto  de  N  personas,  numeradas  de  1  a  N,  que deben  votarse  entre  ellas,  
gana  aquel  candidato  que  obtenga  mayoría absoluta,  si  es  que  existe.  
Utilizando  como  representación  un  vector  A donde  la  componente  A[i]  del  vector  contiene  
el  número  de  candidatos  al que  ha  elegido  el  votante  i-ésimo,  diseñe  o  implemente  
una  función recursiva  que  indique  el  candidato  elegido  o  N+1,  en  su  defecto.

Precondición:
    ganador es 0
    aux[] tiene la suma de los votos


*/
int fun_votantes(int v[], int size){
    int v_aux[size];
    vec_initializer(v,size);//Inicializamos el vector auxiliar 
    sum_votos(v,v_aux,size);
    return mayor_vec(v_aux,size-=1,0);
}