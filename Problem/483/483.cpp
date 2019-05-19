#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    string str ;
    string ans = "" ;
    //freopen("../test.in", "r", stdin) ;
    while ( getline(cin, str) ){

        for ( int i = 0  ; i < str.length() ; i++ ) {
            if ( str[i] != ' ' ){
                int star = i, en = i ;
                while ( str[en] != ' ' && en != str.length() ){
                    en++ ;
                }
                for ( int j = en - 1 ; j >= star ; j--){
                    cout << str[j] ;
                }
                i = en - 1 ;
            } else {
                cout << " " ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}



