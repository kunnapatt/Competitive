#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;

    while ( cin >> n && n >= 1){
        int car[10002] = {} ;
        int num, pos ;
        bool ch = false ;
        FOR(i, 0, n){
            cin >> num >> pos ;
            if ( pos+i < 0 ) {
                ch = true ;
            }
            if ( pos+i >= n ){
                ch = true ;
            }
            if ( !ch && car[pos+i] ){
                ch = true ;
            }
            if ( !ch ){
                car[pos+i] = num ;
            }
        }
        if ( ch ){
            cout << "-1" << endl ;
        }else {
            FOR(i, 0, n){
                if ( i != n-1 ){
                    cout << car[i] << " " ;
                }else {
                    cout << car[i] << endl ;
                }
            }
        }
    }
    return 0 ;
}








