#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

bool prime(int a){
    for ( int i = 2 ; i * i <= a ; i++ ){
        if ( a % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main() {
    int n ;
    while ( cin >> n ){
        if ( n == 0 ) {
            return 0 ;
        }else {
            int mapri = -1 ;
            int val = 0 ;
            int cou = 0 ;
            int ans = 0 ;
            for ( int i = 2 ; i <= n/2 ; i++ ){
                if ( prime(i) ){
                    val = i ;
                    val = n - i ;
                    if ( prime(val) ){
                        ans = i ;
                        break ;
                    }
                }

            }
            printf("%d = %d + %d\n", n, ans, val) ;
        }
    }
    return 0 ;
}

