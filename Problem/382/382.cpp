#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    puts("PERFECTION OUTPUT") ;
    while ( cin >> n && n != 0 ){
        int sum = 0 ;
        bool ch = false ;
        for(int i = 1 ; i < n ; i++){
            if ( n % i == 0 ){
                sum += i ;
            }
            if ( sum > n ){
                ch = true ;
                break ;
            }
        }
        //cout << "PERFECTION OUTPUT\n" ;
        if ( ch ){
            printf("%5d  ABUNDANT\n", n) ;
            //cout << n << " ABUNDANT\n" ;
        }else if ( sum == n ){
            printf("%5d  PERFECT\n", n) ;
            //cout << n << " PERFECT\n" ;
        }else if ( sum < n ){
            printf("%5d  DEFICIENT\n", n) ;
            //cout << n << " DEFICIENT\n" ;
        }

    }
    cout << "END OF OUTPUT\n" ;
    return 0 ;
}
