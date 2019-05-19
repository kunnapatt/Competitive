#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector<bool> visited(1005) ;
vi adj[1005] ;

void dfs(int start){
    if ( visited[start] ) return ;
    visited[start] = true ;
    for(auto a:adj[start]){
        dfs(a) ;
    }
}

int main() {
    int n, m ;
    freopen("../test.in", "r", stdin) ;
    cin >> n >> m ;
    FOR(i, 0, m){
        int in1, in2 ;
        cin >> in1 >> in2 ;
        adj[in1].push_back(in2) ;
        adj[in2].push_back(in1) ;
    }
    int cou = 0 ;
    FOR(i, 1, n+1){
        if ( !visited[i] ){
            dfs(i) ;
            cou++ ;
        }
    }
    cout << cou << endl ;
    return 0 ;
}
