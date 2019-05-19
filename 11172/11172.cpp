
#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int x[n] , y[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x[i] >> y[i] ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( x[i] < y[i] ){
            cout << "<" << endl ;
        }else if ( x[i] > y[i] ) {
            cout << ">" << endl ;
        }else if ( x[i] = y[i] ) {
            cout << "=" << endl ;
        }
    }
    return 0 ;
}
