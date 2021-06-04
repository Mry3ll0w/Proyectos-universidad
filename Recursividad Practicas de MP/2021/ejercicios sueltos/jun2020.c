#include <stdlib.h>
#include <stdio.h>

void llamada_jun_2020(int v[],int n);
void rec_jun_2020(int v[],int n,int it1,int it2);

int main(){
    int v[4]={2,5,4,8};
    llamada_jun_2020(v,4);
    //ex_enero_21(4,v,4,0);
    for (size_t i = 0; i < 4; i++)
    {
        printf("%i, ",v[i]);
    }
    printf("\n");
    return 0;
}

void llamada_jun_2020(int v[],int n){
    rec_jun_2020(v,n,0,1);
}

void rec_jun_2020(int v[],int n,int it1,int it2){
    if (it1<n)
    {
        if (it2>=n)
        {
            it2=1;
            it1++;

        }
        
        int t1=v[it2],t2=v[it1];
        if(t2!=0){
            if ((t1%t2)==0&& (t1!=t2))
            {
                v[it2]=0;
            }
        }

        rec_jun_2020(v,n,it1,it2+1);

    }


}