#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        int m, result = 0 ;
        cin >> m ;
        FOR(j, 0, m){
            vi a(3) ;
            FOR(k, 0, 3){
                cin >> a[k] ;
            }
            result += a[0]*a[2] ;
        }
        cout << result << endl ;
    }
    return 0 ;
}
