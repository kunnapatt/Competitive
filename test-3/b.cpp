#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int t ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> t ){
        int n, d ;
        FOR(i, 0, t){
            cin >> n >> d ;
            vi a(n) ;
            int sum = 0 ;
            FOR(j, 0, n){
                cin >> a[j] ;
                sum += a[j] ;
            }
            if ( sum <= d ){
                cout << "yes\n" ;
            }else {
                cout << "no\n" ;
            }
        }
    }
}


