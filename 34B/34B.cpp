#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++ )
#define vi vector<int>
int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi de(n) ;
    FOR(i, 0, n) {
        int a ;
        cin >> a ;
        de[i] = a ;
    }
    sort(de.begin(), de.end()) ;
    int sum = 0 ;
    FOR(i, 0, m) {
        if ( de[i] < 0 ) {
            sum += de[i] ;
        }
        //cout << de[i] << endl ;
    }
    cout << abs(sum) << endl ;
    return 0 ;
}
