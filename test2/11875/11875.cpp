#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define long long long
#define vi vector<int>

int main() {
    int t ;
    cin >> t ;
    FOR(i, 0, t){
        int x[30] ;
        int n ;
        cin >> n ;
        FOR(i, 0, n){
            cin >> x[i] ;
        }
        sort(x, x+n) ;
        printf("Case %d: %d\n", i+1, x[n/2]) ;
    }
    return 0 ;
}

