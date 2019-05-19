#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++ )
#define vi vector<int>
int main() {
    int n, co = 0 ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    sort(a.begin(), a.end()) ;
    FOR(i, 0, n) {
        //cout << a[i] << ", " ;
        if ( n > 2) {
            if ( i+1 != n ) {
            int x = a[i+1] - a[i] ;
            FOR(j, 0, x){
                co++ ;
            }
            co-- ;
            }
        }else if ( n <= 2 ) {
            if ( i+1 != n ) {
            int x = a[i+1] - a[i] ;
            FOR(j, 0, x){
                co++ ;
            }
            co-- ;
            }
        }
    }
    //cout << endl ;
    cout << co << endl ;
    return 0 ;
}
