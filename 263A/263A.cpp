#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for (int i = a ; i < b ; i++ )
int main() {
        //freopen("test.in", "r", stdin) ;
        int x,y ;
        int n ;
        FOR(i, 0, 5){
            FOR(j, 0, 5){
                cin >> n ;
                if ( n == 1 ) {
                    x = i ;
                    y = j ;
                }
            }
        }
        cout << abs(x-2)+abs(y-2) ;
    return 0 ;
}
