#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector< pair <int, int> > adj[10005] ;
vector<bool> visited(10005) ;
int mi ;

void dfs(int start){
    if ( visited[start] ) return ;
    visited[start] = true ;
    for(auto a:adj[start]){
        mi = min(mi, a.second) ;
        //dfs(a.first) ;
    }
}

int main(){
    int n, m, k ;
    while ( cin >> n >> m >> k ){

        FOR(i, 0, m){

        }
    }
    return 0 ;
}

