#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define FORE(i, a, b) for(int i = a ; i <= b ; i++)
#define vi vector<int>

int main(){

    //freopen("test.in", "r", stdin) ;

    int n, m ;
    cin >> n >> m ;
    map<int, set<int>> adjList ;
    FOR(i, 0, n){
        int u, v ;
        cin >> u >> v ;
        adjList[u].insert(v) ;
        adjList[v].insert(u) ;
    }
    vector<long long int> dp(n+1, 1) ;
    FORE(i, 1, n){
        for ( auto u : adjList[i]){
            if ( u < i ){
                dp[i] = max(dp[i], dp[u]+1) ;
            }
        }
    }
    long long int ans = 0 ;
    FORE(i, 1, n){
        ans = max(ans, dp[i]*adjList[i].size()) ;
    }
    cout << ans << "\n" ;
    return 0 ;
}
