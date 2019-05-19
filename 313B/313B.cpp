#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    string str ;
    freopen("test.in", "r", stdin) ;
    while ( cin >> str ){
        int n ;
        cin >> n ;
        vi st(n, 0), en(n, 0) ;
        str = "A" + str ;
        vi lookup(str.length(), 0) ;
        vi lookup2(str.length(), 0) ;
        lookup[0] = 1 ;
        lookup2[0] = 1 ;
        FOR(i, 1, str.length()){
            lookup[i] = lookup[i-1] ;
            lookup2[i] = lookup2[i-1] ;
            if ( str[i] == '#' && str[i] == str[i-1] ){
                lookup[i]++ ;
            }
            if ( str[i] == '.' && str[i] == str[i-1] ){
                lookup2[i]++ ;
            }
        }
        FOR(i, 0, n){
            cin >> st[i] >> en[i] ;
            int ans = -lookup[str[i]] + lookup[en[i]] + lookup2[en[i]] - lookup2[str[i]] ;
            cout << ans  << endl ;
        }
    }
    return 0 ;
}
