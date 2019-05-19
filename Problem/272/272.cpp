#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    string str ;
    //freopen("../test.in", "r", stdin) ;
    int cou = 0 ;
    while ( getline(cin, str) ){
        FOR(i, 0, str.length()){
            if ( str[i] == '"' ){
                if ( cou % 2 == 0 ){
                    cout << "``" ;
                }else if ( cou % 2 != 0 ){
                    cout << "\'\'" ;
                }
                cou++ ;
                }else {
                    cout << str[i] ;
                }
            }
            cout << endl ;
    }
    return 0 ;
}

