#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ){
        if ( n != 0 ){
            int a[n][n] = {} ;
            FOR(i, 0, n){
                FOR(j, 0, n){
                    cin >> a[i][j] ;
                }
            }
            int sumcol = 0, sumrow = 0, ansrow = 0, anscol = 0, coui = 0, couj = 0 ;
            bool chei = false, chej = false ;
            FOR(i, 0, n){
                FOR(j, 0, n){
                    sumrow += a[j][i] ;
                    if ( chei == false ){
                        ansrow = i+1 ;
                    }
                    sumcol += a[i][j] ;
                    if ( chej == false ){
                        anscol = i+1 ;
                    }
                }
                if ( sumrow % 2 != 0 ){
                    chei = true ;
                    coui++ ;
                }
                if ( sumcol % 2 != 0 ){
                    chej = true ;
                    couj++ ;
                }
                sumrow = 0, sumcol = 0 ;
            }
            if ( !chei && !chej ){
                cout << "OK" << endl ;
            }else if ( couj > 1 || coui > 1 ) {
                cout << "Corrupt" << endl ;
            }else {
                cout << "Change bit (" << anscol << "," << ansrow << ")" << endl ;
            }
        }
    }
    return 0 ;
}
