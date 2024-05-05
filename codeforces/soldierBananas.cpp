#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int k ,n ,w;
    cin >> k;
    cin >> n;
    cin >> w;
    int totalCost = 0;
    
    for( int i=1; i<=w; i++){
        int cost = k*i;
        totalCost = totalCost + cost;
    }
    int borrow = totalCost - n;
    if( borrow>0){
        return borrow;
    }
    else{
        return 0;
    }
    return 0;
}