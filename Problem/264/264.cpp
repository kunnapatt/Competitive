#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ){
        float dec = 0 ;
        int term = 0 ;
        dec = ((-1 + pow((1+8*n), 0.5))/2) ;
        term = dec ;
        //cout << term << ", " << dec << endl ;
        int remain = 0, divi = 0;
        if ( dec - term > 0 ){
            term++ ;
        }
        int beforsum = (term-1)*term/2 ;
        int ans = n - beforsum ;
        //cout << ans << endl ;
        if ( term%2 == 0 ){
            cout << "TERM " << n << " IS " << ans << "/" << term-ans+1 << endl ;
        }else {
            cout << "TERM " << n << " IS " << term-ans+1 << "/" << ans << endl ;
        }
    }
    return 0 ;
}
