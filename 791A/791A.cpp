#include <bits/stdc++.h>

using namespace std ;

int main () {
    int a, b, n = 0 ;
    while ( cin >> a >> b ) {
        if ( a == b ) {
            cout << "1" << endl ;
        }else {
            while( a <= b ) {

                a *= 3 ;
                b *= 2 ;
                n++ ;

            }
            cout << n << endl ;
            n = 0 ;
        }
    }
    return 0 ;
}
