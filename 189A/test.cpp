#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n, a, b, c ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> a >> b >> c ;
    vi ans(n+1, 0) ;
    int ma = -99999999 ;
    FOR(i, 1, n+1){
        ans[i] = ma ;
        if ( i >= a ){
            ans[i] = max(ans[i], ans[i-a]+1) ;
        }
        if ( i >= b ){
            ans[i] = max(ans[i], ans[i-b]+1) ;
        }
        if ( i >= c ){
            ans[i] = max(ans[i], ans[i-c]+1) ;
        }
    }
    cout << ans[n] << endl ;
    return 0 ;
}
