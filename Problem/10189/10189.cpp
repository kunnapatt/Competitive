#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    int cou = 1 ;
    cin >> n >> m ;
        while ( n != 0 && m != 0 ){
            if ( cou != 1 ){
                cout << endl ;
            }
                string str[n] ;
                FOR(i, 0, n){
                    cin >> str[i] ;
                }
                int a[n+2][m+2] = {} ;
                FOR(i, 0, n){
                    FOR(j, 0, m){
                        if ( str[i][j] == '*' ){
                            a[i-1][j-1]++ ;
                            a[i-1][j]++ ;
                            a[i-1][j+1]++ ;
                            a[i][j-1]++ ;
                            a[i][j+1]++ ;
                            a[i+1][j-1]++ ;
                            a[i+1][j]++ ;
                            a[i+1][j+1]++ ;
                        }
                    }
                }
                cout << "Field #" << cou << ":" << endl ;
                FOR(i, 0, n){
                    FOR(j, 0, m){
                        if ( str[i][j] == '*' ){
                            cout << '*' ;
                        }else {
                            cout << a[i][j] ;
                        }
                    }
                    cout << endl ;

                }
            cou++ ;
            cin >> n >> m ;

        }
    return 0 ;
}
