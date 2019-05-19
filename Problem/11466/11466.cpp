#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

bool isprime(int n){
    for(int i = 2 ; i * i <= n ; i++){
        if ( n % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n && n != 0 ){
         int ans = -1 ;
         for ( int i = 2 ; i <= n/2 ; i++){
            if ( isprime(i) ){
                if ( n%i == 0 ){
                    ans = i ;
                    //break ;
                }
            }
         }
         cout << ans << endl ;
    }
    return 0 ;
}




