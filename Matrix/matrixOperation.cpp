#include<iostream>
#include<limits.h>
using namespace std;


void display( int mat[][4], int row,int col){
    cout << "Normal array displaying." << endl;
    for( int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void displayColumnWise( int mat[3][4], int row,int col){
    cout << "Column-wise displaying" << endl;
    for( int i=0; i<col; i++){
        for( int j=0; j<row; j++){
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

void rowWiseSum(int mat[3][4],int row,int col){
    for( int i=0; i<row; i++){
        int sum = 0;
        for( int j=0; j<col; j++){
            sum += mat[i][j];
        }
        cout << "Sum of row " << i << " is: "<< sum << endl;
    }
}

void columnWiseSum(int mat[3][4],int row,int col){
    for( int i=0; i<col; i++){
        int sum = 0;
        for( int j=0; j<row; j++){
            sum += mat[j][i];
        }
        cout << "Sum of column " << i << " is: "<< sum << endl;
    }
}


int main(){
    int row=3 ;int col=4;
    // cout << "Enter number of rows: ";
    // cin >> row;
    // cout << "Enter number of columns: ";
    // cin >> col;

    int mat[3][4];
    cout << "Enter elements of the matrix.\n";
    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> mat[i][j];
        }
    }
    display(mat,row,col);
    rowWiseSum(mat,row,col);
    columnWiseSum(mat,row,col);
    displayColumnWise(mat,row,col);

    return 0;
}