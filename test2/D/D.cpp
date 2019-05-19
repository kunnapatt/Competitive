#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define long long long
#define vi vector<int>

int main() {
    int t ;
    cin >> t ;
    FOR(i, 0, t){
        int n ;
        int lastg = 0 ;
        cin >> n ;
        char s[n+1] ;
        for(int j = 1 ; j <= n ; j++){
            cin >> s[j] ;
            if ( s[j] == '<' ){
                lastg = j ;
            }

        }
        printf("%d\n", lastg) ;

    }
    return 0 ;
}

