#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        string country, a ;
        map<string, int> m ;
        FOR(i, 0, n){
            cin >> country ;
            m[country]++ ;
            getline(cin, a) ;
        }
        for(auto a:m){
            cout << a.first << " " << a.second << endl ;
        }
    }
    return 0 ;
}
