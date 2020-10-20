#include <iostream>

using namespace std;
void create_matrix(int,int,int matrix[][2]);
void copy_matrix(int matrixa[][2],int matrixb[][2]);
void show_matrix(int ma[][2],int ,int);
int main(){
    int ma[2][2],mb[2][2];
    create_matrix(2,2,ma);
    copy_matrix(ma,mb);
    show_matrix(mb,2,2);
    return 0;
}
void create_matrix(int rows,int columns,int matrix[][2]){
    cout<<"Introduce los valores de la matriz: "<<endl;
    for (int i = 0; i < rows;i++){
        for (int j = 0; j < columns; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
}
void show_matrix(int matrix[][2],int rows,int columns){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    
}
void copy_matrix(int matrixa[][2],int matrixb[][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matrixb[i][j]=matrixa[i][j];
        }
    }

}