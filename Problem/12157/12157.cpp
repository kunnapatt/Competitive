#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int mile(int n){
    int ans = 0 ;
    while ( n >= 0 ){
        ans += 10 ;
        n -= 30 ;
    }
    return ans ;
}

int juice(int n){
    int ans = 0 ;
    while ( n >= 0 ){
        ans += 15 ;
        n -= 60 ;
    }
    return ans ;
}

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        int m ;
        cin >> m ;
        int ansmile = 0, ansjuice = 0 ;
        FOR(j, 0, m){
            int a ;
            cin >> a ;
            ansmile += mile(a) ;
            ansjuice += juice(a) ;
        }
        if ( ansmile < ansjuice ){
            cout << "Case " << i+1 << ": Mile " << ansmile ;
        }else if ( ansmile > ansjuice ){
            cout << "Case " << i+1 << ": Juice " << ansjuice ;
        }else if ( ansmile == ansjuice ){
            cout << "Case " << i+1 << ": Mile Juice " << ansmile ;
        }
        cout << endl ;
    }
    return 0;
}



