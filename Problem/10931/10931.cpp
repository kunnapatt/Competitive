#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

string tobinary(int n) {
    string s = "" ;
    while ( n != 0 ) {
        //s = ( n%2 == 0 ? "0":"1") + s ;
        if ( n%2 == 0 ){
            s="0"+s ;
        }else {
            s="1"+s ;
        }
        n = n/2 ;
    }
    return s ;
}

int main(){
    long long int n ;
    freopen("test.in", "r", stdin) ;
    while ( cin >> n && n != 0 ){
        string str = tobinary(n) ;
        int cou = 0 ;
        FOR(i, 0, str.length()){
            if ( str[i] == '1' ){
                cou++ ;
            }
        }
        cout << "The parity of " << str << " is " << cou << " (mod 2).\n" ;

    }
    return 0 ;
}
