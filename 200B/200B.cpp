#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    while ( cin >> n ) {
        double co = 0, in ;
        for ( int i = 0 ; i < n ; i++ ) {
            cin >> in ;
            in /= n ;
            co += in ;
        }
        printf("%.12f \n", co) ;
    }
    return 0 ;
}
