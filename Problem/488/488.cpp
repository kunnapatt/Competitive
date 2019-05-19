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
        int a, b ;
        cin >> a >> b ;
        FOR(l, 0, b){
            for(int j = 1 ; j <= a ; j++){
                for(int k = 0 ; k < j ; k++){
                    cout << j ;
                }
                cout << endl ;
            }
            for(int j = a-1 ; j >= 1 ; j--){
                for(int k = 0 ; k < j ; k++){
                    cout << j ;
                }
                cout << endl ;
            }
            if ( l != b-1 ){
                cout << endl ;
            }
        }
        if ( i != n-1 ){
            cout << endl ;
        }

    }
    return 0 ;
}
