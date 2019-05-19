#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define long long long
#define vi vector<int>

int main() {
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    map<string, int> m ;
    FOR(i, 0, n){
        string str ;
        cin >> str ;
        if ( m.find(str) == m.end() ){
            cout << "OK\n" ;
            m[str] = 0 ;
        }else {
            m[str]++ ;
            cout << str << m[str] << endl ;
        }
    }
    return 0 ;
}

