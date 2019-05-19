#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {

    int n ;
    //freopen("test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        long long int k ;
        int x ;
        cin >> k >> x ;
        cout << 9*(k - 1) + x << "\n" ;
    }
    return 0 ;
}

