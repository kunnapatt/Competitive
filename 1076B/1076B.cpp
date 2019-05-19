#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool isprime(long n){
    for(long i = 2 ; i * i <= n ; i++){
        if ( n % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main(){
    long n ;
    while ( cin >> n ){
        if ( isprime(n) ){
            cout << "1\n" ;
        }else {
            if ( n % 2 == 0 ){
                cout << n/2 << endl ;
            }else {
                for(int i = 3 ; i * i <= n ; i++){
                    if ( n % i == 0 ) {
                        cout << (n-i)/2 + 1 << endl ;
                        break ;
                    }
                }
            }
        }
    }
    return 0 ;
}
