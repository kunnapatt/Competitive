#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i =  a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    //vi a(n) ;
    int cou = 1, last = 0, ans = 0 ;
    FOR(i, 0, n){
        int in ;
        cin >> in ;
        if ( i == 0 ){
            cou = 1 ;
        }else {
            if ( in < last ){
                cou = 1 ;
            }else {
                cou++ ;
            }
        }
        last = in ;
        ans = max(ans, cou) ;
    }
    cout << ans << endl ;
    return 0 ;
}
