#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;

    cin >> n ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    long long sl = 0, sr = 0, ans = 0 ;
    int l = -1, r = n ;
    while ( l < r ){
        if (sl==sr){
            ans = sl ;
            sl += a[++l] ;
            sr += a[--r] ;
        }else if (sl < sr){
            sl += a[++l] ;
        }else {
            sr += a[--r] ;
        }
    }
    cout << ans << endl ;
    return 0 ;
}
