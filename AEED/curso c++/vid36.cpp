#include <iostream>
using namespace std;
//Manejo de matrices c/c++
int main(){
    int **matrix;int rows,cols;
    cout<<"Please introduce the row and cols of the matrix"<<endl;
    cin>>rows;cin>>cols;
    matrix=new int*[rows];
    for(int i=0;i<rows;i++){
        matrix[i]=new int [cols];
    }
    //To introduce the  of the matrix
    cout<<"Now introduce the matrix elements"<<endl;
    for(int r=0;r<rows;r++){
        for ( int c = 0; c < cols; c++)
        {
            cin >>matrix[r][c];
        }
        
    }
    //To show the matrix itself
    cout <<"Matrix's elements:"<<endl;
    for(int r=0;r<rows;r++){
        for ( int c = 0; c < cols; c++)
        {
            cout<<matrix[r][c]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}