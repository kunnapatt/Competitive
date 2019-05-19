#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    while ( cin >> n ) {
        cin.ignore() ;
        string str[n] ;
        FOR(i, 0, n){
            getline(cin, str[i]) ;
            cout << str[i] << endl ;
        }
    }
    return 0 ;
}




