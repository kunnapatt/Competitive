#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    cin >> n ;
    cout << "Lumberjacks:\n" ;
    FOR(i, 0, n){
        int a[10] ;
        FOR(j, 0, 10){
            cin >> a[j] ;
        }
        bool chlh = false, chhl = false ;
        FOR(j, 1, 10){
            if ( a[j] < a[j-1] ){
                chlh = true ;
            }
            if ( a[j] > a[j-1] ){
                chhl = true ;
            }
        }
        if ( chhl && chlh ) {
            cout << "Unordered" << endl ;
        }else if ( !chhl || !chlh ){
            cout << "Ordered" << endl ;
        }
    }
    return 0;
}

