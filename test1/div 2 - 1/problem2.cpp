#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    int ans = 1 ;
    int lastx = 0, lasty = 0 ;
    FOR(i, 0, n){
        int x, y ;
        cin >> x >> y ;
        if ( lastx < lasty ){
            lastx = min(x, lasty) ;
            if ( y > lastx ) {
                ans++ ;
            }
        }else if ( lastx > lasty ){
            lasty = min(y, lastx) ;
            if ( x > lasty ){
                ans++ ;
            }
        }else if ( lastx == lasty && lastx <= x && lasty <= y ){
            ans += min(x, y) - lastx ;
        }
        lastx = x ;
        lasty = y ;
    }
    cout << ans << endl ;
    return 0 ;
}
