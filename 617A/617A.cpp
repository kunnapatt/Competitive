#include <bits/stdc++.h>

using namespace std ;

int main() {
    long long int x, y = 0 ;
    while ( cin >> x ) {
        if ( x >= 1 && x <= 1000000 ){
            while ( x > 0 ) {
                x -= 5 ;
                y++ ;
            }
        }
        cout << y << endl ;
        y = 0 ;
    }
    return 0 ;
}
