#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    int aw = 0 ;
    FOR(i, 0, n){
        int x ;
        cin >> x ;
        if ( x == 1 ){
            aw += a[i] ;
            a[i] = 0 ;
        }
    }
    int msl = 0 ;
    FOR(i, 0, m){
        msl += a[i] ;
    }
    int sl = msl ;
    FOR(i, m, n){
        sl += a[i] - a[i-m] ;
        msl = max(msl, sl) ;
    }
    cout << aw + msl << endl ;
    return 0 ;
}
