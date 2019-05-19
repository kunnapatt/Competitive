#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    long inpu1, inpu2 ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> inpu1 >> inpu2 ){
        if ( inpu1 == 0 && inpu2 == 0 ){
            break ;
        }
        int ans = 0 ;
        int result = 0 ;
        while ( inpu1 || inpu2 ){
            result = (( inpu1%10 + inpu2%10 ) + result)/10 ;
            inpu1 /= 10 ;
            inpu2 /= 10 ;
            ans += result ;
        }

        if ( ans == 0 ){
            cout << "No carry operation." << endl ;
        }else if ( ans == 1 ) {
            cout << "1 carry operation." << endl ;
        }else if ( ans > 1 ) {
            cout << ans << " carry operations." << endl ;
        }
    }

    return 0 ;
}



