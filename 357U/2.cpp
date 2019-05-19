#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int v[6] = {0, 1, 5, 10, 25, 50} ;

long lookup[30001][6] ;
//memset(lookup, 0, sizeof(lookup)) ;


long counttheway(int coin,int type){
        if ( coin == 0 ){
            return 1 ;
        }
        if ( type == 1 ){
            return 1 ;
        }
        if ( coin < 0 ){
            return 0 ;
        }
        if ( type == 0 ){
            return 0 ;
        }
    if ( lookup[coin][type] != -1 ){
        return lookup[coin][type] ;
    }
    //}else {
    lookup[coin][type] = counttheway(coin - v[type], type) + counttheway(coin, type - 1) ;
    //}else {
    return lookup[coin][type] ;
    //}

}

int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ){
        int indx = -1 ;
        FOR(i, 1, 6){
            if ( v[i] <= n ){
                indx = i ;
            }
        }
        memset(lookup, -1, sizeof(lookup)) ;
        long a = counttheway(n, indx) ;
        if ( a != 1 ){
            cout << "There are " << a << " ways to produce " << n << " cents change." << endl ;
        }else {
            cout << "There is only " << a << " way to produce " << n << " cents change." << endl ;
        }
    }
    return 0 ;
}






