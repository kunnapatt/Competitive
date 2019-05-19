#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector< pair <int, int> > adj[100005] ;
vector<bool> visited(100005) ;
int mi ;
vi a(100005) ;
map<int, int> ma ;

void dfs(int start){
    if ( visited[start] ) return ;
    visited[start] = true ;
    for (auto b:adj[start]){
        if ( ma.count(b.first) == 0 ){
            mi = min(mi, b.second) ;
        }
        //dfs(a.first) ;
    }
}

int main(){
    int n, m, k ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> m >> k ){
        fill(adj+0, adj+n, vector<pair<int, int>>()) ;
        mi = INT_MAX ;
        ma.clear() ;
        FOR(i, 0, m){
            int in1, in2, in3 ;
            cin >> in1 >> in2 >> in3 ;
            adj[in1].push_back(make_pair(in2, in3)) ;
            adj[in2].push_back(make_pair(in1, in3)) ;
        }
        a.resize(k) ;
        fill(a.begin(), a.end(), 0) ;
        FOR(i, 0, k){
            cin >> a[i] ;
            ma[a[i]]++ ;
        }

        FOR(i, 0, k){
            fill(visited.begin(), visited.end(), false) ;
            dfs(a[i]) ;
        }

        if ( mi == INT_MAX ){
            cout << "-1\n" ;
        }else {
            cout << mi << endl ;
        }
    }

    return 0 ;
}

