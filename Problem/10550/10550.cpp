#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int a, b, c, d ;
    while ( cin >> a >> b >> c >> d && ( a != 0 || b != 0 || c != 0 || d != 0) ){
        int first = a - b ;
        if ( first < 0 ) {
            first += 40 ;
        }
        first *= 9 ;
        int second = c - b ;
        if ( second < 0 ) {
            second += 40 ;
        }
        second *= 9 ;
        int third = c - d ;
        if ( third < 0 ){
            third += 40 ;
        }
        third *= 9 ;
        int ans = 1080+third+first+second ;
        cout << ans << endl ;
    }
    return 0 ;
}
