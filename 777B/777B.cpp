#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    //freopen("test.in", "r", stdin) ;

    int n ;
    string s, m ;
    cin >> n >> s >> m ;
    vi fs(10, 0), fm(10, 0) ;
    FOR(i, 0, n){
        fs[s[i] - '0']++ ;
    }
    FOR(i, 0, n){
        fm[m[i] - '0']++ ;
    }
    int mn = 0 ;
    int diffmn = 0 ;
    FOR(i, 0, 10){
        diffmn += fm[i] - fs[i] ;
        if ( diffmn > 0 ){
            mn += diffmn ;
            diffmn = 0 ;
        }
    }
    cout << mn << endl ;
    int mx = 0 ;
    int diffmx = 0 ;
    FOR(i, 0, 9){
        diffmx += fs[i] ;
        if ( diffmx > 0 ){
            int k = min(diffmx, fm[i+1]) ;
            mx += k ;
            diffmx -= k ;
        }
    }
    cout << mx << endl ;
    return 0 ;
}
