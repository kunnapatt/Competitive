#include <bits/stdc++.h>

using namespace std ;

int main () {
    //freopen("test.in", "r", stdin) ;
    int n , x ;
    cin >> n ;
    //cin.ignore() ;
    string str[n] ;
    bool s1 = false, s2 = false, s3 = false, s4 = false ;
    for ( int i = 0 ; i < n ; i++ ) {
        //getline(cin, str[i]) ;
        cin >> str[i] ;
    }
    for ( int i = 0 ; i < n ; i++ ) {
        if ( ( str[i][0] == 'O' && str[i][1] == 'O' ) ) {
            s1 = true ;
            s2 = true ;
            x = i ;
            break ;
        }else if ( ( str[i][3] == 'O' && str[i][4] == 'O' ) ) {
            s3 = true ;
            s4 = true ;
            x = i ;
            break ;
        }
    }
    if ( ( s1 == true && s2 == true ) ) {
        cout << "YES" << endl ;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( i == x ) {
                cout << "++|" << str[i][3] << str[i][4] << endl ;
            }else {
                cout << str[i] << endl ;
            }
        }
    }else if( s3 == true && s4 == true ) {
        cout << "YES" << endl ;
        for ( int i = 0 ; i < n ; i++ ) {
            if ( i == x ) {
                cout << str[i][0] << str[i][1] << "|++" << endl ;
            }else {
                cout << str[i] << endl ;
            }
        }
    }else {
        cout << "No" << endl ;
    }

    return 0 ;
}
