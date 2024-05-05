#include<iostream>
using namespace std;

void display( int mat[3][4]){
    for( int i=0; i<3; i++){
        for( int j=0; j<4; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int mat[3][4] = {
        {1,2,3,4},
        {2,5,3,4},
        {9,2,6,7}
    };
    display(mat);

    return 0;
}