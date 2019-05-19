#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    cin >> n ;

    FOR(i, 0, n){
        int m ;
        vi a(10) ;
        FOR(i, 0, 10){
            a[i] = 0 ;
        }
        cin >> m ;
        for(int j = 1 ; j <= m ; j++){
            if ( j > 9 ){
                string str = to_string(j) ;
                for(int k = 0 ; k < str.length() ; k++){
                    int in = str[k] - '0' ;
                    //cout << in << " " ;
                    a[in]++ ;
                }
            }else {
                a[j]++ ;
            }
        }
        for(int j = 0 ; j < 10 ; j++){
            if ( j < 9 ){
                cout << a[j] << " " ;
            }else {
                cout << a[j] << endl ;
            }
        }
    }
    return 0 ;
}



