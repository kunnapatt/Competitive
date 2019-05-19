#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n, k, m ;
    while ( cin >> n >> k >> m ){
        long lookup[60][60] ;
        memset(lookup, 0, sizeof(lookup)) ;
        lookup[0][0] = 1 ;

        FOR(i, 1, k+1){
            FOR(j, 1, n+1){
                FOR(l, 1, m+1){
                    if ( j - l >= 0 ){
                        lookup[i][j] += lookup[i-1][j-l] ;
                    }
                }
            }
        }
        cout << lookup[k][n] << endl ;
    }
    return 0 ;
}
