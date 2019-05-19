#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && n != 0 ) {
        bool ch = false ;
        vi a(1000+10) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        FOR(i, 0, n) {
            if ( a[i] ){
                if ( ch ){
                    cout << " " ;
                }
                ch = true ;
                cout << a[i] ;
            }
        }

        if ( !ch ){
            cout << "0" ;
        }
        cout << endl ;
    }
    return 0 ;
}


