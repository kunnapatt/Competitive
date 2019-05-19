#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector< pair<int, int> > adj[1005] ;
vector<bool> visited(1005) ;
int sta, dst, mi ;

void dfs(int start){
    if ( visited[start] ) return ;
    visited[start] = true ;
    dst = start ;
    for(auto a:adj[start]){
        mi = min(mi, a.second) ;
        dfs(a.first) ;
    }
}

int main(){
    int n, p ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> p ){
        if ( p == 0 ){
            cout << "0\n" ;
            break ;
        }
        fill(adj+0, adj+1, vector<pair<int, int>>()) ;
        map<int, int> ma ;
        FOR(i, 0, p){
            int in1, in2, in3 ;
            cin >> in1 >> in2 >> in3 ;
            adj[in1].push_back(make_pair(in2, in3)) ;
            ma[in2]++ ;
        }
        int cou = 0 ;
        //vector<pair<int, int>> ans[p+3] ;
        map<int, pair<int, int>> ans ;
        FOR(i, 1, n+1){
            if ( !ma.count(i) && cou < p ){
                fill(visited.begin(), visited.end(), false) ;
                mi = INT_MAX ;
                dst = 0 ;
                dfs(i) ;
                //ans[i].push_back(make_pair(dst, mi)) ;
                ans[i] = make_pair(dst, mi) ;
                cou++ ;
            }
        }
        cout << cou << endl ;
        for(auto a:ans){
            cout << a.first << " " << a.second.first << " " << a.second.second << endl ;
        }

    }
    return 0 ;
}

