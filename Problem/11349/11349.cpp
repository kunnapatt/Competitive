#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

long mat[101][101] ;

bool symatric(long mat[101][101], int m){
    FOR(i, 0, m){
        FOR(j, 0, m){
            if ( mat[i][j] != mat[m-i-1][m-j-1] ){
                return false ;
            }
        }
    }
    return true ;
}

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        FOR(k, 0, n){
            int m ;
            string tem ;
            cin >> tem >> tem >> m ;

            bool ch = false ;
            FOR(i, 0, m){
                FOR(j, 0, m){
                    cin >> mat[i][j] ;
                    if ( mat[i][j] < 0 ){
                        ch = true ;
                    }
                }
            }
            if ( !ch && symatric(mat,m) ){
                cout << "Test #" << k+1 << ": Symmetric.\n" ;
            }else {
                cout << "Test #" << k+1 << ": Non-symmetric.\n" ;
            }
        }


    }
}


