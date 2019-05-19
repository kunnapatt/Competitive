#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

long countit(long n){
    if ( n == 0 ){
        return 0 ;
    }else if ( n > 0 ){
        return countit(n/2) + n%2 ;
    }
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    cin >> n ;
    while ( n >= 1 && n <= 500 ){
        long m ;
        cin >> m ;
        cout << countit(m) << endl ;
        n-- ;
    }
    return 0 ;
}





