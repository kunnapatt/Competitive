#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int w1, h1, w2, h2 ;
    //freopen("test.in", "r", stdin) ;
    cin >> w1 >> h1 >> w2 >> h2 ;
    int ans = 0, sq = 0, na = 0 ;
    if ( w1 >= 1 && h1 >= 1 && w2 >= 1 && h2 >= 1 ){
        if ( w1 >= w2 ){
            na = (w1-w2)*h2 ;
            sq = (w1+2)*(h1+h2+2) ;
            ans = w1*h1 + w2*h2 ;
            ans = sq - (ans + na) ;
            cout << ans << endl ;
        }
    }
    return 0 ;
}
