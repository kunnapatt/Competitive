#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

vector<bool> visited(30) ;
vi adj[30] ;

void dfs(int start){
    if ( visited[start] ) return ;
    visited[start] = true ;
    for(auto a:adj[start]){
        dfs(a) ;
    }
}

int main() {
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> m ){
        fill(adj, adj+30, vi()) ;
        FOR(i, 0, n){
            char ch1, ch2 ;
            cin >> ch1 >> ch2 ;
            adj[ch1 - 'a'].push_back(ch2 - 'a') ;
        }
        FOR(i, 0, m){
            string str1, str2 ;
            cin >> str1 >> str2 ;
            if ( str1.length() == str2.length() ){
                if ( str1 == str2 ){
                    cout << "yes\n" ;
                }else {
                    FOR(j, 0, str1.length()){
                        fill(visited.begin(), visited.end(), false) ;
                        dfs(str1[j] - 'a') ;
                        if ( !visited[str2[j] - 'a'] ){
                            cout << "no\n" ;
                            break ;
                        }else {
                            if ( j == str1.length() - 1 ){
                                cout << "yes\n" ;
                            }
                        }
                    }
                }
            }else {
                cout << "no\n" ;
            }
        }
    }
    return 0 ;
}
