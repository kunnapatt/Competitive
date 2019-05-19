#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n) {
        int a[n+1][n+1] ;
        memset(a, 0, sizeof(a)) ;
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= n ; j++) {
                cin >> a[i][j] ;
            }
        }

        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                a[i][j] += ( a[i-1][j] + a[i][j-1] - a[i-1][j-1] ) ;
                //cout << a[i][j] << " " ;
            }
            //cout << endl ;
        }
        int maxsum = -2000 ;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                for(int k = 1 ; k <= i ; k++){
                    for(int l = 1 ; l <= j ; l++){
                        maxsum = max(maxsum, a[i][j] - a[k-1][j] - a[i][l-1] + a[k-1][l-1]) ;
                        //cout << a[k][l] << " " ;
                    }
                }
                //cout << endl ;
            }
        }
        cout << maxsum << endl ;
    }
    return 0 ;
}





