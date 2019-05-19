#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    string str[n] ;
    FOR(i, 0, n){
        cin >> str[i] ;
    }
    FOR(i, 0, n){
        if ( str[i].length() == 3 ) {
            if ( str[i][0] == 'o' && str[i][1] == 'n' || str[i][0] == 'o' && str[i][2] == 'e' || str[i][1] == 'n' && str[i][2] == 'e' ) {
                cout << 1 << endl ;
            }else if ( str[i][0] == 't' && str[i][1] == 'w' || str[i][0] == 't' && str[i][2] == 'o' || str[i][1] == 'w' && str[i][2] == 'o') {
                cout << 2 << endl ;
            }
        }else if ( str[i].length() == 5 ){
            if ( str[i][0] == 't' && str[i][1] == 'h' && str[i][2] == 'r' && str[i][3] == 'e' ||
                str[i][0] == 't' && str[i][1] == 'h' && str[i][2] == 'r' && str[i][4] == 'e' ||
                str[i][0] == 't' && str[i][1] == 'h' && str[i][3] == 'e' && str[i][4] == 'e' ||
                str[i][0] == 't' && str[i][2] == 'r' && str[i][3] == 'e' && str[i][4] == 'e' ||
                str[i][4] == 'e' && str[i][1] == 'h' && str[i][2] == 'r' && str[i][3] == 'e'){
                cout << 3 << endl ;
            }
        }
    }
    return 0 ;

}
