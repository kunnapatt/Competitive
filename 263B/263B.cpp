#include <bits/stdc++.h>>

using namespace std ;

#define FOR(i, a, b) for( int i = a ; i < b ; i++ )
int main() {
    int n, m ;
    freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vector <int> a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    int co = 0, ma = a[0] ;
    //sort(a.begin(), a.end(), greater<int>());
    FOR(i, 0, n){
        if ( i-1 != n  ) {
            ma = max(ma,a[i]) ;
        }
        //cout << a[i] << endl ;
    }
    FOR(i, 0, n){
        if ( i-1 != n ) {
            if ( a[i] < ma ) {
                co++ ;
            }
        }

    }
    if ( co >= m ) {
        cout << a[m-1] << " " << "0" << endl ;
    }else {
        cout << "-1" << endl ;
    }
    return 0 ;
}
