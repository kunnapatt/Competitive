#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    while ( cin >> n && n != 0){
        vi a(n) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        sort(a.begin(), a.end()) ;
        FOR(i, 0, n){
            if ( i != n-1 ){
                cout << a[i] << " " ;
            }else {
                cout << a[i] ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}


