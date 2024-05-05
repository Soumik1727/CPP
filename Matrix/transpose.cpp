#include<iostream>
#include<limits.h>
using namespace std;

void displayTranspose( int mat[3][4], int row,int col){
    cout << "Transpose array displaying" << endl;

    for( int i=0; i<col; i++){
        for( int j=0; j<row; j++){
            // swap(mat[i][j], mat[j][i]);
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){
    int row=3 ;int col=4;

    int mat[3][4];
    cout << "Enter elements of the matrix.\n";
    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> mat[i][j];
        }
    }
    displayTranspose(mat,row,col);

    cout << "Main matrix..." << endl;
    for( int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}