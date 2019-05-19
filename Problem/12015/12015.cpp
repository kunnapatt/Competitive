#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        string str[10] ;
        int k[10] ;
        int ma = -1 ;
        FOR(j, 0, 10){
            cin >> str[j] >> k[j] ;
            ma = max(ma, k[j]) ;
        }
        cout << "Case #" << i+1 << ":\n" ;
        FOR(j, 0, 10){
            if ( k[j] == ma ){
                cout << str[j] << endl ;
            }
        }
    }
    return 0;
}


