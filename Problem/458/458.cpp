#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    string str ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> str ){
        string str1 = "" ;
        FOR(i, 0, str.length()){
            str1 += ( str[i] - 7 ) ;
        }
        cout << str1 << endl ;
    }
    return 0 ;
}
