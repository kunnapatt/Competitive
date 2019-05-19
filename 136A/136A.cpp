#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++ )
#define vi vector<int>
int main() {
    int n, in ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ) {
        vi present(n) ;
        FOR(i, 0, n){
            cin >> in ;
            present[i] = in ;
        }
        FOR(i, 0, present.size()){
            FOR (j, 0, present.size()){
                if ( present[j] == i+1  ){
                    cout << j+1 << " " ;
                }
            }
        }
        cout << endl ;
    }
}
