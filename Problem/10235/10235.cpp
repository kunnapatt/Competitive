#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool isprime(long n){
    for(int i = 2 ; i * i <= n ; i++){
        if ( n % i == 0 ){
            return false ;
        }
    }
    return true ;
}

long reversenum(long n){
    long rever = 0 ;
    while ( n > 0 ){
        rever = (rever*10) + n%10 ;
        n/=10 ;
    }
    return rever ;
}

int main(){
    long n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        bool prime = isprime(n) ;
        long revers = reversenum(n) ;
        bool reversprime = isprime(revers) ;
        if ( n == revers ){
            reversprime = false ;
        }
        if ( prime && reversprime ){
            cout << n << " is emirp.\n" ;
        }else if ( prime && !reversprime ){
            cout << n << " is prime.\n" ;
        }else{
            cout << n << " is not prime.\n" ;
        }
    }
    return 0;
}
