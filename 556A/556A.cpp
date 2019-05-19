#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    string str = "" ;
    FOR(i, 0, n){
        string in ;
        cin >> in ;
        str += in ;
    }
    int c0 = 0, c1 = 0 ;
    FOR(i, 0, n){
        if ( str[i] == '0' ){
            c0++ ;
        }else if ( str[i] == '1' ){
            c1++ ;
        }
    }
    cout << abs(c0-c1) << endl ;
    //cout << str ;
    return 0 ;
}
