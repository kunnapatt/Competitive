#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main () {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vector<int> a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    sort(a.begin(), a.end()) ;
    if ( m == 0 && a[0] == 1 ) {
        cout << "-1" << endl ;
    }else if ( m == 0 ){
        cout << 1 ;
    }else if ( m <= n - 1 ) {
        if ( a[m] != a[m-1] ){
            cout << a[m-1] << endl ;
        }else {
            cout << "-1" << endl ;
        }
    }else if ( n == m ) {
        cout << a[m-1] << endl ;
    }

    return 0 ;
}
