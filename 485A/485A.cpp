#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {

    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    FOR(i, 0, m){
        n=(n+n)%m ;
        if ( n == 0 ){
            cout << "Yes \n" ;
            return 0 ;
        }
    }
    cout << "No \n" ;
    return 0 ;
}


