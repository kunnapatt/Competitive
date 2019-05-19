#include <bits/stdc++.h>

using namespace std ;

int ans(int n){
    if ( n == 0 ) {
        return 1 ;
    }
    if ( n < 10 ) {
        return n ;
    }
    return max(n%10 * ans(n/10), 9 * ans(n/10-1));
}

int main(){
    int n ;
    cin >> n ;
    cout << ans(n) << endl ;
    return 0 ;
}
