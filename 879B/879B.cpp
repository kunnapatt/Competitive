#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    freopen("test.in", "r", stdin) ;
    int n ;
    long k ;
    cin >> n >> k ;
    queue<int> q ;
    int ma = 0 ;
    FOR(i, 0, n) {
        int x ;
        cin >> x ;
        q.push(x) ;
        ma = max(ma, x) ;
    }
    if ( k >= n ) {
        cout << ma << endl ;
        return 0 ;
    }

    int pw = 0 ;
    int p = q.front() ; q.pop() ;
    while ( pw < k ) {
        int c = q.front() ; q.pop() ;
        if ( p > c ) {
            q.push(c) ;
            pw++ ;
        }else {
            q.push(p) ;
            p = c ;
            pw = 1 ;
        }
    }
    cout << p << endl ;
    return 0 ;
}
