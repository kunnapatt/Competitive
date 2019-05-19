#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for( int i = a ; i < b ; i++ )
#define vi vector<int>
int main() {
    int n ;
    long long int m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    queue<int> q ;
    int k = 0 ;
    FOR(i, 0, n){
        int x ;
        cin >> x ;
        q.push(x) ;
        k = max(k, x) ;
        //cout << x << ", " << k << endl ;
    }
    if ( m >= n ){
        cout << k << endl ;
        return 0 ;
    }
    int p1 = q.front() ; q.pop() ;
    int co = 0 ;
    while ( co < m ) {
        int p2 = q.front() ; q.pop() ;
        if ( p1 > p2 ) {
            q.push(p2) ;
            co++ ;
        } else {
            co = 1 ;
            q.push(p1) ;
            p1 = p2 ;
        }
    }
    cout << p1 << endl ;
    return 0 ;
}
