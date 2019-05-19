#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int waste[9] ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( scanf("%d %d %d %d %d %d %d %d %d", &waste[0], &waste[1], &waste[2], &waste[3], &waste[4], &waste[5], &waste[6], &waste[7], &waste[8]) == 9 ){
        int sumarea = 0, area[6] ;
        FOR(i, 0, 9){
            sumarea += waste[i] ;
        }
        area[0] = sumarea - waste[0] - waste[4] - waste[8] ;
        area[1] = sumarea - waste[0] - waste[5] - waste[7] ;
        area[2] = sumarea - waste[1] - waste[5] - waste[6] ;
        area[3] = sumarea - waste[1] - waste[3] - waste[8] ;
        area[4] = sumarea - waste[2] - waste[4] - waste[6] ;
        area[5] = sumarea - waste[2] - waste[3] - waste[7] ;
        int ans = INT_MAX ;
        FOR(i, 0, 6){
            ans = min(ans, area[i]) ;
        }
        if ( ans == area[1] ){
            cout << "BCG " << ans << endl ;
        }else if ( ans == area[0] ){
            cout << "BGC " << ans << endl ;
        }else if ( ans == area[5] ){
            cout << "CBG " << ans << endl ;
        }else if ( ans == area[4] ){
            cout << "CGB " << ans << endl ;
        }else if ( ans == area[3] ){
            cout << "GBC " << ans << endl ;
        }else if ( ans == area[2] ){
            cout << "GCB " << ans << endl ;
        }
    }
    return 0 ;
}

