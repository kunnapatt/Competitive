#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    string in, str = "" ;
    //freopen("test.in", "r", stdin) ;
    cin >> in ;
    long ans = 0 ;
    FOR(i, 0, in.length()){
        FOR(j, i+1, in.length()){
            FOR(k, j+1, in.length()){
                if ( in[i] == 'Q' && in[j] == 'A' && in[k] == 'Q' ){
                    ans++ ;
                }
            }
        }
    }
    cout << ans << endl ;
    return 0 ;
}
