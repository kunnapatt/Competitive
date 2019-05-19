#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int ln, lm, eq ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> ln >> lm >> eq && ( ln != 0 && lm != 0 && eq != 0) ){
        int ma = -1, mi = 300000000 ;
        ma = max(ma, ln) ;
        ma = max(ma, lm) ;
        ma = max(ma, eq) ;
        mi = min(mi, ln) ;
        mi = min(mi, lm) ;
        mi = min(mi, eq) ;
        int mi2 = 0 ;
        if ( ( ma == ln && mi == lm ) || ( ma == lm && mi == ln ) ) mi2 = eq ;
        else if ( ( ma == ln && mi == eq ) || ( ma == eq && mi == ln ) ) mi2 = lm ;
        else if ( ( ma == lm && mi == eq ) || ( ma == eq && mi == lm ) ) mi2 = ln ;
        if ( sqrt(mi*mi+mi2*mi2) == ma ){
            cout << "right" << endl ;
        }else {
            cout << "wrong" << endl ;
        }
    }
    return 0 ;
}



