#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n >> m ){
        vi adj[26] ;
        FOR(i, 0, n){
            char in1, in2 ;
            cin >> in1 >> in2 ;
            adj[in1 - 'a'].push_back(in2 - 'a') ;
        }
        //cout << "A" << endl ;
        FOR(i, 0, m){
            string str1, str2 ;
            cin >> str1 >> str2 ;
            if ( str1.length() == str2.length() ){
                if ( str1 == str2 ){
                    cout << "yes\n" ;
                }else {
                    FOR(i, 0, str1.length()){
                        vector<bool> visited(26, 0) ;
                        queue<int> q ;
                        q.push(str1[i] - 'a') ;
                        visited[str1[i] - 'a'] = true ;
                        while ( !q.empty() ){
                            int current = q.front() ;
                            q.pop() ;
                            for(auto a:adj[current]){
                                if ( !visited[a] ){
                                    visited[a] = true ;
                                    q.push(a) ;
                                }
                            }
                        }
                        if ( !visited[str2[i] - 'a'] ){
                            cout << "no\n" ;
                            break ;
                        }else {
                            if ( i == str1.length()-1 ){
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
}

