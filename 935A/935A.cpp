#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    while ( cin >> n ) {
        int co = 0 ;
        for ( int i = 1 ; i < n ; i++ ) {
            if ( n % i == 0 ) {
                co++ ;
            }
        }
        cout << co << endl ;
    }
    return 0 ;
}
