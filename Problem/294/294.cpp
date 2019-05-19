#include <bits/stdc++.h>

using namespace std ;

int main() {
    int n, m ;
    long long int ans = 1 ;
    while ( cin >> n >> m ) {
       for ( int i = m ; i <= n ; i++ ){
            ans = ans*m ;
       }
    }
    return 0 ;
}
