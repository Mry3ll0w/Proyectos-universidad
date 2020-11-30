#include <iostream>
#include <cstring>
#include <algorithm>
#include "COLA.h"
#include "PILA.h"
using namespace std;
int ej1(COLA<int>,PILA<int>);
void ej2(COLA<int>,int,int);
int main() {
    COLA<int> ci(4);
    PILA<int> pi(4);
    COLA<int> c_ej2(9);
    int v1[4]={1,2,4,9};//Pila
    int v2[4]={11,9,78,2};//Cola
    int v3[9]={131,2,45,1,23,5,76,7,0};
    for (int i = 0; i <pi.tope() ; ++i) {
            ci.push(v2[i]);
            pi.push(v1[i]);
    }
    for (int i = 0; i <c_ej2.size() ; ++i) {
        c_ej2.push(v3[i]);
    }
    //Una vez introducidos los datos pasamos a los ejercicios de la practica
    //cout<<ej1(ci,pi)<<endl;
    ej2(c_ej2,2,76);
    return 0;
}
//Se dice que una pila es isomórfica a una cola cuando los elementos situados en posiciones
//pares de la pila coinciden con los situados en posiciones impares de la cola.
//Precondicion==> tienen que tener el mismo tamaño
int ej1(COLA<int> cint,PILA<int> pint){
    assert(cint.size()==pint.tope());
    int isomorfic=1,it=0;
    int v_pila[cint.size()],v_cola[cint.size()];
    for (int i = 0; i< cint.size();i++){
        v_cola[i]=cint.pop();
        v_pila[i]=pint.pop();
    }
    //Comprobamos si son isomorficas
   while (it<cint.size()-1){
        if ((it%2)!=0){//La posiciones pares son realmente las impares ya que es n-1
            if (v_cola[it]!=v_pila[it-1]){
                isomorfic=0;
            }
        }
        it++;
    }
    return isomorfic;
}//ok
void ej2(COLA<int> c,int a,int b) {

        int aux[c.size()],aux2[c.size()];
        int li,ls;
        for (int i = 0; i <c.size() ; ++i) {
            //Obtenemos los limites superior e inferior
            aux[i]=c.pop();
            if (a==aux[i]){
                li=i;
            }
            if (b==aux[i]){
                ls=i;
            }
        }
        //Corregir en caso de que los limites sup/inf esten invertidos
        if (ls<li){
            int x = li;
            li=ls;
            ls=li;
        }
        //damos la vuelta al vector para realizar la copia
        memcpy(aux2,aux,sizeof aux);
        reverse(aux2,aux2+c.size());
        for (int j = li; j <=ls ; ++j) {
            aux[j]=aux2[j];

        }
        cout<<"Valor aux: "<<endl;
        for (int i = 0; i <c.size() ; ++i) {
            cout<<aux[i]<<", ";
        }
    cout<<endl;
        //hacemos el push en la pila de nuevo (ya que al hacer el pop anteriormente debería estar vacia)
        for (int i = 0; i < c.size(); ++i) {
            c.push(aux[i]);
        }
        c.contenido();
}
