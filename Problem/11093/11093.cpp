#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        int m ;
        FOR(i, 0, n){
            cin >> m ;
            vi sta(m), sta1(m) ;
            FOR(i, 0, m){
                cin >> sta[i] ;
            }
            FOR(i, 0, m){
                cin >> sta1[i] ;
            }
            long sum = 0 ;
            long mi = 1000000 ;
            FOR(i, 0, m){
                sum += (sta[i] - sta1[i]) ;
                mi = min(sum, mi) ;
            }
            int ind = 0 ;
            while ( mi < 0 && ind < m){
                mi -= sta[ind] - sta1[ind]  ;
                ind++ ;
            }
            cout << "Case " << i+1 << ": " ;
            if ( ind == n || sum < 0 ){
                cout << "Not possible\n" ;
            }else {
                cout << "Possible from station " << ind+1 << endl ;
            }
        }

    }
    return 0 ;
}




