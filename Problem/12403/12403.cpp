#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    string str[n] ;
    cin.ignore() ;
    int moco = 0 ;
    FOR(i, 0, n){
        getline(cin, str[i]) ;
        if ( str[i] == "report" ){
            cout << moco << endl ;
        }else {
            int pos = str[i].find(" ") ;
            moco += stoi(str[i].substr(pos)) ;
        }
    }
}
