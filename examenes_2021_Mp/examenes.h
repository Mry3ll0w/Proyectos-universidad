//
// Created by anton on 09/05/2021.
//

#ifndef EXAMENES_2021_MP_EXAMENES_H
#define EXAMENES_2021_MP_EXAMENES_H
/**
 * @brief Recursiva del examen de Septiembre de 2021
 */
void ex_enero_21(int n,int v[],int size,int it,int it2){
    if (it!=n)
    {
        if (v[it]!=0&&v[it2]%v[it]==0)
        {
            v[it2] = 0;
        }
        if (it2>=n){
            it++;
            it2=it+1;
        }
        ex_enero_21(n,v,size,it,it2+1);
    }
}

#endif //EXAMENES_2021_MP_EXAMENES_H
