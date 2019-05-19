#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    cin >> n ;
    FOR(i, 0, n){
        int m ;
        cin >> m ;
        int ma = -1, mi = 100;
        FOR(j, 0, m){
            int k ;
            cin >> k ;
            ma = max(ma, k) ;
            mi = min(mi, k) ;
        }
        cout << 2*(ma-mi) << endl ;
    }
}
