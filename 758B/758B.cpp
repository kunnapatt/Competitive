#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n ;
    while ( cin >> n && n > 0 && n < 101 ){
        vi a(n) ;
        int sum = 0, ma = -1 ;

        FOR(i, 0, n){
            cin >> a[i] ;
            ma = max(ma,a[i]) ;
        }
        sort(a.begin(), a.end()) ;
        FOR(i, 0, n){
            sum += abs(ma-a[i]) ;
        }
        cout << sum << endl ;
    }
}
