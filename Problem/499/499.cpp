#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

int main(){
    string str ;
    //freopen("../test.in", "r", stdin) ;
    while ( getline(cin, str) ){
        map<char, int> m ;
        int ma = -1 ;
        FOR(i, 0, str.length()){
            if ( ( str[i] >= 'a' && str[i] <= 'z' ) || ( str[i] >= 'A' && str[i] <= 'Z' ) ){
                m[str[i]]++ ;
                ma = max(ma, m[str[i]]) ;
            }
        }
        //int ma = -1 ;
        for(auto a:m){
            if ( a.second == ma ){
                cout << a.first ;
            }
        }
        cout << " " ;
        for(auto a:m){
            if ( a.second == ma ){
                cout << a.second << endl ;
                break ;
            }
        }
    }
    return 0 ;
}


