#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    while ( cin >> n ){
        long m ;
        FOR(i, 0, n){
            cin >> m ;
            m = m * ( m - 1) ;
            m = m >> 1 ;
            if ( m & 1 ) {
                cout << "Case " << i+1 << ": " << m << "/2" << endl ;
            }else {

                cout << "Case " << i+1 << ": " << ( m >> 1 ) << endl ;
            }

        }
    }
    return 0 ;
}


