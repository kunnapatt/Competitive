#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n, mag1 = 0, mag2 = 0 ;
    cin >> n ;
    string str[n] ;
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> str[i] ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( ( str[i] == "01" && str[i+1] == "10" ) || ( str[i] == "10" && str[i+1] == "01" ) ) {
            mag1++ ;
        }
    }

    cout << ++mag1 << endl ;
    return 0 ;
}
