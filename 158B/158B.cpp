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
    //cout << taxi << endl ;
    sort(a.rbegin(), a.rend()) ;
    int first = 0, last = n-1, ans = 0 ;
    while ( first != last ){
        if ( a[first] + a[last] <= 4 ){
            a[first] += a[last] ;
            last-- ;

        }else {
            first++ ;
            ans++ ;
        }
    }
    cout << ans+1 << endl ;
    return 0 ;
}
