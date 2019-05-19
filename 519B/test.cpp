#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
int main() {
    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    vi a(n) ;
    int suma = 0 ;
    FOR(i, 0, n){
        cin >> a[i] ;
        suma+= a[i] ;
    }
    sort(a.begin(), a.end()) ;
    vi b(n-1) ;
    int sumb = 0 ;
    FOR(i, 0, n-1){
        cin >> b[i] ;
        sumb += b[i] ;
    }
    sort(b.begin(), b.end()) ;
    vi c(n-2) ;
    int sumc = 0 ;
    FOR(i, 0, n-2){
        cin >> c[i] ;
        sumc += c[i] ;
    }
    sort(c.begin(), c.end()) ;
    cout << suma - sumb << endl ;
    cout << sumb - sumc << endl ;
    return 0 ;
}
