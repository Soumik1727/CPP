#include<iostream>
using namespace std;

int canDivide( int w){
    if( w % 2 == 0 && w>2){
        return 1;
    }
    else{
        return -1;  
    }
}

int main(){
    int w;
    cin >> w;
    int ans;
    if( w >= 1 && w<=100){
        ans = canDivide(w);
    }else{
        return -1;
    }
    
    if( ans == 1){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}