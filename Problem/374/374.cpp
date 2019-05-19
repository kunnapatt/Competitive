#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    long b, p, m ;
    while ( cin >> b >> p >> m ) {
        if ( b > m ){
            b %= m ;
        }
        long ans = 1, tempb = b ;
        while ( p > 0 ) {
            if ( p & 1 ) {
                ans = ans * b ;
                ans = ans % m ;
            }
            b *= b ;
            b = b % m ;
            p = p >> 1 ;
        }
        cout << ans << endl ;
    }
    return 0 ;
}



