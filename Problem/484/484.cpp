#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    map<int, int> m ;
    vi a ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        if ( m.count(n) == 0 ){
            m[n]++ ;
            a.push_back(n) ;
        }else {
            m[n]++ ;
        }
    }
    for(int i = 0 ; i < a.size() ; i++){
        cout << a[i] << " " << m[a[i]] << endl ;
    }
    return 0 ;
}
