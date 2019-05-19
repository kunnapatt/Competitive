#include<bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(n) ;
    FOR(i, 0, n){
        cin >> a[i] ;
    }
    sort(a.begin(), a.end()) ;
    int n1 = n ;
    vi b ;
    int cou = 0 ;
    FOR(i, 0, n1){
        if ( i > 0 ){
            swap(a[i], a[n1-1]) ;
            n1-- ;
        }
    }
    FOR(i, 0, n){
        cout << a[i] << " " ;
    }
    cout << endl ;
    return 0 ;
}
