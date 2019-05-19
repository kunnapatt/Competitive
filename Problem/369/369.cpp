#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long


int main(){
    long arr[101][101] ;
    arr[1][0] = 1 ;
    arr[1][1] = 1 ;
    for(int i = 2 ; i <= 100 ; i++){
        arr[i][0] = 1 ;
        for(int j = 1 ; j <= i ; j++){
            arr[i][j] = arr[i-1][j] + arr[i-1][j-1] ;
        }
        arr[i][i] = 1 ;
    }
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while( cin >> n >> m && ( n != 0 && m != 0 ) ){
        cout << n << " things taken " << m << " at a time is " << arr[n][m] << " exactly." << endl ;
    }
}


