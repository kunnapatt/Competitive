#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

long f[100005][2] ;
const int R = 0, U = 1 ;
const long inf = 1e18 ;

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ){
        vi cost(n+1) ;
        FOR(i, 1, n+1){
            cin >> cost[i] ;
        }
        vector<string> word(n+1) ;
        FOR(i, 1, n+1){
            cin >> word[i] ;
        }
        f[1][U] = 0 ;
        f[1][R] = cost[1] ;
        FOR(i, 2, n+1){
            f[i][U]=f[i][R] = inf;
            if ( word[i-1] <= word[i] ){
                f[i][U] = f[i-1][U] ;
            }
            string rev = word[i-1] ;
            reverse(rev.begin(), rev.end()) ;
            if ( rev <= word[i] ){
                f[i][U] = min(f[i][U], f[i-1][R]) ;
            }
            string revcur = word[i] ;
            reverse(revcur.begin(), revcur.end()) ;
            if ( word[i-1] <= revcur ){
                f[i][R] = f[i-1][U] + cost[i] ;
            }
            if ( rev <= revcur ){
                f[i][R] = min(f[i][R], f[i-1][R]+cost[i]) ;
            }
        }
        long ans = min(f[n][U], f[n][R]) ;
        if ( ans == inf ){
            cout << "-1" << endl ;
        }else {
            cout << ans << endl ;
        }

    }

    return 0 ;
}

