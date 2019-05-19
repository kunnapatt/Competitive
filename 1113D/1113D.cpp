#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

int main(){
    int n ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> n ){
        vi a(n), b(n) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        int cou = 0 ;
        map<long double, int> mm ;
        FOR(i, 0, n){
            cin >> b[i] ;
            if ( a[i] != 0 ){
                mm[-(long double)b[i]/a[i]]++ ;
            }
            if ( a[i] == 0 && b[i] == 0 ){
                cou++ ;
            }
        }
        int ma = 0 ;
        for(auto a:mm){
            ma = max(ma, a.second) ;
        }
        cout << ma+cou << endl ;
    }
    return 0 ;
}

