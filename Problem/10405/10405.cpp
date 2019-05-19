#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long


int lcs(string str1, string str2, int m, int n){
    int L[m+1][n+1] ;

    FOR(i, 0, m+1){
        FOR(j, 0, n+1){
            if ( i == 0 || j == 0 ){
                L[i][j] = 0 ;
            }else if ( str1[i-1] == str2 [j-1]){
                L[i][j] = L[i-1][j-1] + 1 ;
            }else {
                L[i][j] = max(L[i-1][j], L[i][j-1]) ;
            }
        }
    }
    return L[m][n] ;
}

int main() {
    string str1, str2 ;
    //freopen("../test.in", "r", stdin) ;
    while( getline(cin, str1) && getline(cin, str2) ){
        int leng1 = str1.length() ;
        int leng2 = str2.length() ;
        int ans = lcs(str1, str2, leng1, leng2) ;
        cout << ans << endl ;
    }
    return 0 ;
}

