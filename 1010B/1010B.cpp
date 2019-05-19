#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define long long long int
int main(){
    long m ;
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> m >> n ;
    FOR(i, 0, n){
        cout << i+1 << endl ;
        int re ;
        cin >> re ;
        if ( re == 0 || re == -2 ){
            return 0 ;
        }
        p[i] = re == -1 ? 0 : 1 ;

    }
    int l = n+1 ;
    int r = m ;
    int re ;
    int pos = 0 ;
    do {
        int m = (l+r)/2 ;
        cout << m << endl ;
        cin >> re ;
        if ( re == 0 ){
            return 0 ;
        }else if ( (p[pos] == 1 && re == -1) || ( p[pos] == 0 && re == 1 ) ){
            r = m-1 ;
        }else if (( p[pos] == 1 && re == 1) || ( p[pos] == 0 && re == -1 )){
            l = m+1 ;
        }
        pos = (pos+1)%n ;
    } while ( re != 0 && re != -2 )

    return 0 ;
}
