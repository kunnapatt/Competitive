#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

long v[12] = {0, 5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000} ;
long lookup[30005][12] ;

long dollar(int n, int type){
    if ( n == 0 ){
        return 1 ;
    }
    if ( n < 0 ){
        return 0 ;
    }
    if ( type == 1 ){
        return 1 ;
    }
    if ( type == 0 ){
        return 0 ;
    }

    if ( lookup[n][type] != -1 ){
        return lookup[n][type] ;
    }
    lookup[n][type] = dollar(n - v[type], type) + dollar(n, type - 1) ;
    return lookup[n][type] ;
}


int main() {
    double n ;
    memset(lookup, -1, sizeof(lookup)) ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && n != 0.0 && n <= 300.00 ){
        double in = n ;
        n*=100 ;
        n+=0.5 ;
        long a = dollar(n, 11) ;
        printf("%6.2f%17lld\n", in, a) ;
    }
}

