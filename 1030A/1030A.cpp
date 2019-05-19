#include <bits/stdc++.h>

using namespace std ;

int n = 0 ;

int main() {
    cin >> n ;
    int x[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x[i] ;

    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( x[i] == 1 ) {
            cout << "HARD" ;
            return 0 ;
        }
    }
    cout << "Easy" ;
    return 0 ;
}



