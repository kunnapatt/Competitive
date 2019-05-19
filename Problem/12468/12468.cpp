#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m && ( n != -1 && m != -1) ){
        int ans ;
        if ( m - n > 0 ){
            ans = min(m - n, n-m+100) ;
        }else {
            ans = min(n-m, m-n+100) ;
        }
        cout << ans << endl ;
    }
    return 0;
}


