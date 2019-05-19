#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int lookup[7491][5] ;
int cents[6] = {0, 1, 5, 10, 25, 50} ;

int coinchange(int coin, int cent){
    if (coin < 0 || cent < 1){
        return 0 ;
    }else if ( coin == 1 || cent == 1 ){
        return 1 ;
    }
    if ( lookup[coin][cent] != -1 ){
        return lookup[coin][cent] ;
    }
    lookup[coin][cent] = coinchange(coin - cents[cent], cent) + coinchange(coin, cent-1) ;
    return lookup[coin][cent] ;
}

int main() {
    int n ;
    memset(lookup, -1, sizeof(lookup)) ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        cout << coinchange(n, 5) << endl ;
    }
    return 0 ;
}


