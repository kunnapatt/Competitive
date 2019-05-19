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
        int distan = 1422 ;
        vi sta(n) ;
        bool ch = false ;
        FOR(i, 0, n){
            cin >> sta[i] ;
        }
        sort(sta.begin(), sta.end()) ;
        int car = sta[0] ;
        FOR(i, 0, n){
            if ( i != n-1 && abs( car - sta[i]) > 200 ){
                ch = true ;
                break ;
            }else if ( i == n-1 && (2*abs(1422 - sta[i]) > 200 || abs(car - sta[i]) > 200) ){
                ch = true ;
                break ;
            }
            car = sta[i] ;
        }
        if ( !ch ){
            cout << "POSSIBLE" << endl ;
        }else {
            cout << "IMPOSSIBLE" << endl ;
        }
    }
}







