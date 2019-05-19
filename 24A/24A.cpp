#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    map<int, map<int, int>> adjList ;
    FOR(i, 0, n){
        int a, b, c ;
        cin >> a >> b >> c ;
        adjList[a][b] = c ;
        adjList[b][a] = -c ;


    }
    int v = 1, last = 0 ;
    int fwd = 0, bkd = 0 ;
    do {
        for ( auto e : adjList[v] ){
            if ( e.first != last ){
                if ( e.second > 0 ){
                    // reverse has cost
                    bkd += e.second ;
                }else {
                    fwd -= e.second ;
                }
                last = v ;
                v = e.first ;
                break ;
            }
        }
    } while ( v != 1 ) ;
    cout <<  ( fwd < bkd ? fwd : bkd) << endl ;
    return 0 ;
}
