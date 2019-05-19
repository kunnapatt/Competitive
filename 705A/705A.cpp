#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n ;
    bool a = true, b ;
    while ( cin >> n ) {
        while ( n > 0 ) {
            cout << "I " ;
            if ( a ) {
                cout << "hate " ;
                b = true ;
                a = false ;
            }else if ( b ){
                cout << "love " ;
                a = true ;
                b = false ;
            }
            if ( n > 1 ) {
                cout << "that " ;
            }
            n-- ;
        }
        cout << "it" ;
    }
    return 0 ;
}
