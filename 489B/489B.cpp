#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main() {
    int n, m, ans = 0 ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi b(n) ;
    FOR(i, 0, n){
        cin >> b[i] ;
    }
    cin >> m ;
    vi g(m) ;
    vi c(101,0) ;
    FOR(i, 0, m){
        cin >> g[i] ;
    }
    sort(b.begin(), b.end()) ;
    sort(g.begin(), g.end()) ;
    int ch = 0, first = 0, last = 0 ;
    if ( n - m <= 0 ){
        FOR(i, 0, n){
            FOR(j, 0, m){
                if ((abs(b[i] - g[j]) <= 1) && !c[j]){
                    //ch = g[j] ;
                    c[j] = 1 ;
                    //cout << "b = " << b[i] << ", " << g[j] << endl ;
                    ans++ ;
                    break ;
                }

            }
            ch = 0 ;
            //ch = -1 ;
        }
    }else {
        FOR(i, 0, m){
            FOR(j, 0, n){
                if ((abs(g[i] - b[j]) <= 1) && !c[j]){
                    c[j] = 1 ;
                    //ch = b[j] ;
                    //ch = 1 ;
                    //cout << "g = " << g[i] << ", " << b[j] << endl ;
                    ans++ ;
                    break ;
                }

            }
            ch = 0 ;
        }

    }
    cout << ans << endl ;
    return 0 ;
}
