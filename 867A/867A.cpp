#include<bits/stdc++.h>

using namespace std ;

int main() {
    int n, f = 0, s = 0 ;
    cin >> n ;
    string str ;
    cin >> str ;
    for ( int i = 0  ; i < n ; i++ ) {

        if ( str[i] == 'F' && str[i+1] == 'S' ) {
            f++ ;
        }else if ( str[i] == 'S' && str[i+1] == 'F' ) {
            s++ ;
        }
    }
    if ( s > f ) {
        cout << "YES" << endl ;
    }else if ( s <= f ) {
        cout << "No" << endl ;
    }
    return 0 ;
}
