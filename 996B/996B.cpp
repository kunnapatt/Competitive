#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

int main(){
    int n ;
    while ( cin >> n ){
        vi a(n+1) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        for(int i = 0, j = 0 ; ; i++, j++){
            if ( i == n ) i = 0 ;
            if ( a[i] <= j ) {
                cout << i+1 << endl ;
                break ;
            }
        }
    }
    return 0 ;
}
