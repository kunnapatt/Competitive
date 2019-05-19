#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

long long lookup[5001] ;

long fibo(int n){
    if ( lookup[n] == -1 ){
        if ( n == 0 ) lookup[n] = 0 ;
        if ( n == 1 ) lookup[n] = 1 ;
        else lookup[n] = fibo(n-1) + fibo(n-2) ;
    }
    return lookup[n] ;
}

int main(){

    while ( cin >> n ){

        cout << "The Fibonacci number for " << n << " is " << fibo(n) << endl ;
    }
    return 0 ;
}

