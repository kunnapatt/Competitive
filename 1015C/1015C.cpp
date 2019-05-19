#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    int n ;
    long m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vector<int> d(n) ;
    long sum ;
    FOR(i, 0, n) {
        int a, b ;
        cin >> a >> b ;
        d[i] = b - a ;
        sum += a ;
    }
    if ( sum <= m ) {
        cout << "0" << endl ;
        return 0 ;
    }
    sort(d.begin(), d.end()) ;
    FOR(i, 0, n) {
        sum += d[i] ;
        if ( sum <= m ) {
            cout << i+1 << endl ;
            return 0 ;
        }
    }
    cout << "-1" << endl ;
    return 0 ;

}
