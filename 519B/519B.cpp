#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    sort(a.begin(), a.end()) ;
    vi b(n-1) ;
    FOR(i, 0, n-1){
        cin >> b[i] ;
    }
    sort(b.begin(), b.end()) ;
    vi c(n-2) ;
    FOR(i, 0, n-2){
        cin >> c[i] ;
    }
    sort(c.begin(), c.end()) ;
    bool fa = false ;
    FOR (i, 0, n-1){
        if (a[i] != b[i]){
            //cout << a[i] << endl ;
            fa = true ;
            break ;
        }
    }
    if ( !fa ) {
        cout << a[n-1] << endl ;
    }
    bool fb = false ;
    FOR (i, 0, n-2){
        if (b[i] != c[i]){
            //cout << b[i] << endl ;
            fb = true ;
            break ;
        }
    }
    if ( !fb ) {
        cout << b[n-2] << endl ;
    }
    return 0 ;
}
