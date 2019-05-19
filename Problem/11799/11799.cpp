#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    //freopen("test.in" ,"r", stdin) ;
    while ( cin >> n ) {
        int x, co = 0 ;
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> x ;
            int str[x] ;
            for ( int j = 0 ; j < x ; j++ ) {
                cin >> str[j] ;
            }
            int ma[n] ;
            ma[co] = str[0] ;
            for ( int j = 0 ; j < x ; j++ ) {
                if ( str[j] > ma[co] ) {
                    ma[co] = str[j] ;
                }
            }
            cout << "Case " << co+1 << ": " << ma[co] << endl ;
            co++ ;
        }
    }
    return 0 ;
}
