#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define printar(ar) FOR(i, 0, ar.size()) { cout << ar[i] << endl ; }

int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;

    vi a(n, 0), b(n, 0) ;
    int sum = 0, sum1 = 0, ma = -99999 ;
    FOR(i, 0, n){
        cin >> a[i] ;
        sum += a[i] ;
        if ( a[i] == 1 ){
            b[i] = -1 ;
        }else {
            b[i] = 1 ;
        }
        sum1 += b[i] ;
        ma = max(ma, sum1) ;
        if ( sum1 <= 0 ){
            sum1 = 0 ;
        }

    }
    cout << sum+ma << endl ;
    //printar(b) ;
    return 0 ;
}
