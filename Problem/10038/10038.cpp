#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ) {
        vi a(n) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        vi b(n) ;
        FOR(i, 1, n){
            int ans = abs(a[i] - a[i-1]) ;
            b[ans]++ ;
        }
        bool chec = true ;
        FOR(i, 1, n){
            if ( b[i] < 1 ){
                chec = false ;
                break ;
            }
        }
        if ( chec ){
            cout << "Jolly" << endl ;
        }else {
            cout << "Not jolly" << endl ;
        }
    }
    return 0 ;
}
