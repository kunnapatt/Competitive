#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n, exp ;
    while ( cin >> n >> exp && ( n != 0 && exp != 0 ) ){
        int mat[n][n] ;
        memset(mat, 0, sizeof(mat)) ;
        FOR(i, 0, n){
            FOR(j, 0, n){
                cin >> mat[i][j] ;
            }
        }

    }
    return 0 ;
}







