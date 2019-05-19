#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    vi s(n) ;
    set<int> elems ;
    for (int i = n - 1 ; i >= 0 ; i--){
        elems.insert(a[i]) ;
        s[i] = elems.size() ;
    }
    FOR(i, 0, m) {
        int l ;
        cin >> l ;
        cout << s[l-1] << "\n" ;
    }
    return 0 ;
}
