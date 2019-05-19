#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        FOR(i, 0, n){
            int m ;
            cin >> m ;
            vector<string> a ;
            FOR(j, 0, m){
                string str ;
                cin >> str ;
                a.push_back(str) ;
            }
            sort(a.begin(), a.end()) ;
            bool ch = false ;
            FOR(i, 1, a.size()){
                if ( a[i].size() >= a[i-1].size()){
                    if ( a[i-1] == a[i].substr(0, a[i-1].size()) ){
                       ch = true ;
                        break ;
                    }

                }
            }
            if ( ch ){
                cout << "NO\n" ;
            }else {
                cout << "YES\n" ;
            }
        }
    }
}


