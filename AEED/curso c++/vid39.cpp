#include<iostream>
using namespace std;
//Ver si una matriz es simetrica
/*
1)Fill the matrix with data from iostream
2)Copy the inverse of the matrix onto the new matrix
3)For loop to check if simetric
*/
int symmetry_check(int m[][3]);

int main(){
    int matrix[3][3]={{1,2,3},{9,7,9},{89,1,4}};
    if (symmetry_check(matrix)==0)
    {
        cout<<"It is a symmetric matrix"<<endl;
    }
    else
    {
        cout<<"It isn't a symmetric matrix"<<endl;
    }
    
    
    return 0;
}
/**********************************
Function declaration ==>int symmetry_check(int m[][2])
Preconditions ==>Needs to have an initialized matrix with values inside.
Postconditions ==>Return 0 in case of symmetry, 1 if it isn't.
**********************************/
int symmetry_check(int m[][3]){
    //1)Copy the inverse of the 1st matrix onto the new one.
    int mb[3][3];int symmetry=0;
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            mb[i][j] = m[j][i];
        }
    }
    //2)Check if symmetry does exists
    
    for ( int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            
            if (m[i][j]!=mb[i][j])
            {
                symmetry=1;
            }
            
        }
    }
    return symmetry;
}