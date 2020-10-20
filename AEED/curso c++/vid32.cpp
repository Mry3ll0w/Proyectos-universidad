#include <iostream>

using namespace std;

int main(){
    int *v;int size;
    cout<<"Introduce the size of the array"<<endl;
    cin >>size;
    v=new int[size];
    cout<<"Introduce the elements of the array"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>v[i];
    }
    for (int j = 0; j < size;j++)
    {
        cout<<"Element "<<j+1<<" of the array= "<<v[j]<<endl; //j+1 for real life correspondance
    }
    
    

return 0;
}