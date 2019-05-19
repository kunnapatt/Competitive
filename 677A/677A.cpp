#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    int n, height ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> height ) {
        int co = 0, ci ;
        FOR(i, 0, n){
            cin >> ci ;
            if ( ci > height) {
                co += 2 ;
            }else {
                co++ ;
            }
        }
        cout << co << endl ;
    }
    return 0 ;
}
