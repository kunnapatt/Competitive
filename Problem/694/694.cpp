#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int collatz(long n, long m){
    int cou = 0 ;
    while( n <= m ){
        cou++ ;
        if ( n == 1 ){
            break ;
        }else if ( n % 2 == 0 ){
            n/=2 ;
        }else if ( n % 2 != 0 ){
            n=(3*n+1) ;
        }

    }
    return cou ;
}

int main(){
    long n, m ;
    int cou = 0 ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m && ( n >= 0 && m >= 0) ){
        cout << "Case " << cou+1 << ": A = " << n << ", limit = " << m << ", number of terms = " << collatz(n, m) << endl ;
        cou++ ;
    }
    return 0 ;
}

