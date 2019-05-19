#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define long long long
#define vi vector<int>

int main() {
    int h1 = 0 ;
    int e1 = 0 ;
    int l1 = 0 ;
    int l2 = 0 ;
    int ol = 0 ;
    bool c = 0 ;
    string x ;
    int j = 0 ;
    cin >> x ;
    int n = x.length() ;
    FOR(i, 0, n){
        if ( x[i] == 'h' ){h1 = 1 ;}
        if ( h1 == 1 ){
            if ( x[i] == 'e' ) e1 = 1 ;
        }
        if ( e1 == 1 ){
            if ( x[i] == 'l' ){
                for ( int j = i+1 ; j < n ; j++ ){
                    if ( x[j] == 'l' ) l2 = 1 ;
                }
            }
        }
        if ( l2 == 1 ){
            if ( x[i] == 'o' ){
                c = 1 ;
                break ;
            }
        }

    }
    if ( c ){
        cout << "YES" << endl ;
    }else {
        cout << "NO" << endl ;
    }
    return 0 ;
}

