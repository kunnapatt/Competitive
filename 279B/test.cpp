#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n , m ;
    freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    int sumb = 0 ;
    int coub = 0 ;
    int last = 0 ;
    FOR(i, 0, n){
        sumb += a[i] ;
        if ( sumb <= m ){
           coub++ ;
        }else {
            sumb -= a[i - coub] + a[i] ;
            coub-- ;
            i-- ;
        }
        //cout << coub << ", " << sumb << endl ;
    }
    cout << coub ;

    return 0 ;
}
