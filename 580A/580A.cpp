#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    int ans = 0 ;
    cin >> n ;
    vi a(n) ;
    int ls = 0, last = 0 ;
    FOR(i, 0, n){
        int x ;
        cin >> x ;
        if (i == 0){
            ls = 1 ;
        }else {
            if (x < last){
                ls = 1 ;
            }else {
                ls++ ;
            }
        }
        last = x ;
        ans = max(ans, ls) ;
    }
    cout << ans << endl ;
    return 0 ;
}
