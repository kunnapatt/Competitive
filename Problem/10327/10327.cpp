#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        vi a(n) ;
        FOR(i, 0, n){
            cin >> a[i] ;
        }
        int cou = 0 ;
        FOR(i, 0, n){
            FOR(j, i+1, n){
                if ( a[i] > a[j] ){
                    cou++ ;
                }
            }
        }
        cout << "Minimum exchange operations : " << cou << endl ;
    }
    return 0 ;
}

