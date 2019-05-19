#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    string str ;
    int n, coucol = 1 ;
    bool ch = false ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> str ){
        cin >> n ;
        string out[n] ;
        vi a(n), b(n) ;
        FOR(i, 0, n){
            cin >> a[i] >> b[i] ;
            int ma = 0, mi = 0 ;
            ma = max(a[i], b[i]) ;
            mi = min(a[i], b[i]) ;
            //cout << mi << ", " << ma << endl ;
            if ( mi == 0 && ma == 0 ){

            }else {
                FOR(j, mi, ma){
                    if ( str[j] != str[j+1] ){
                        ch = true ;
                        break ;
                    }
                }
                //cout << "AAA" << endl ;
            }
            //cout << "AAA2" << endl ;
            if ( ch == true ){
                out[i] = "No" ;
            }else {
                out[i] = "Yes" ;
            }
            //cout << ch << endl ;
            ch = false ;
        }
        cout << "Case " << coucol << ":" << endl ;
        FOR(i, 0, n){
            cout << out[i] << endl ;
        }
        coucol++ ;
    }

    return 0 ;
}
