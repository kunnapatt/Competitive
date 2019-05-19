#include <bits/stdc++.h>

using namespace std ;

#define vi vector<int>
#define FOR(i, a, b) for(int i = a ; i < b ; i++ )

int main() {
    int n ;
    long m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    long long sum = 0 ;
    vector<int> de(n) ;

    FOR(i, 0, n) {
        int a, b ;
        cin >> a >> b ;
        de[i] = b - a ;
        sum += a ;
    }
    //cout << "sum = " << sum << ", m = " << m << endl ;
    if ( sum <= m ) {
        cout << "0" << endl ;
        return 0 ;
    }
    sort(de.begin(), de.end()) ;
    //cout << "------------" << endl ;
    FOR (i, 0, n) {
        sum += de[i] ;
        //cout << "sort = " << de[i] << ", i = " << i << ", sum = " << sum << endl ;
        if ( sum <= m ) {
            cout << i+1 << endl ;
            return 0 ;
        }
    }
    cout << "-1" << endl ;
    return 0 ;
}
