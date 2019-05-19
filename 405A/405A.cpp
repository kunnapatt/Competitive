#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++ )
#define vi vector<int>

int main(){
    int n, m ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    sort(a.begin(), a.end()) ;
    FOR(i, 0, n){
        cout << a[i] << " " ;
    }
    return 0 ;
}
