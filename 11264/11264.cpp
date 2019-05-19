#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    //freopen("test.in", "r", stdin) ;

    int T ;
    cin >> T ;
    FOR(t, 0, T){
        int n ;
        cin >> n ;
        int cnt = 0 ;
        int last = 0 ;
        long long int sum = 0 ;
        FOR(i, 0, n){
            int c = 0 ;
            cin >> c ;
            if ( c > sum ){
                sum += c ;
                cnt++ ;
            }
            else {
                sum -= last ;
                sum += c ;
            }
            last = c ;
        }
        cout << cnt << endl ;
    }
}
