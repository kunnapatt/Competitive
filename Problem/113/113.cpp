#include <bits/stdc++.h>

using namespace std ;

int main () {
    //int n ;
    //freopen("test.in", "r", stdin) ;
    double q, n ;
    while ( cin >> n >> q ) {
            double ans = exp((log(q)/n)) ;
            //cout << ans << endl ;
            //printf("%.0f\n", ans) ;
            cout.precision(0) ;
            cout << ans ;
    }
    return 0;
}
