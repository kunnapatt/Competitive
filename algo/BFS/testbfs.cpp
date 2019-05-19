#include <bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main() {
    int n, m, v ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m >> v ;
    vi adj[n+1] ;
    FOR(i, 0, m){
        int in1, in2 ;
        cin >> in1 >> in2 ;
        adj[in1].push_back(in2) ;
    }
    vector<bool> visited(n+1) ;
    queue<int> q ;
    q.push(v) ;
    queue<int> qq ;
    vi countq(n+1, 0) ;
    countq[v] = 0 ;
    while( !q.empty() ){
        int current = q.front() ;
        q.pop() ;
        for(auto a:adj[current]){
            if ( !visited[a] ){
                visited[a] = true ;
                q.push(a) ;
                if ( a != v )
                    countq[a] = countq[current] + 1 ;
            }
        }
    }
    FOR(i, 1, n+1){
        if ( i != n ){
            if ( countq[i] == 0 && i != v)  {
                cout << "-1 " ;
            }else {
                cout << countq[i] << " " ;
            }
        }else {
            if ( countq[i] == 0 && i != v)  {
                cout << "-1" ;
            }else {
                cout << countq[i] ;
            }
        }
    }
    return 0 ;
}
