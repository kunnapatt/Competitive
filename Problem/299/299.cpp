#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main(){
    int n ;
    freopen("test.in", "r", stdin) ;
    cin >> n ;
    FOR(i, 0, n){
        int m ;
        cin >> m ;
        vi a(m) ;
        FOR(j, 0, m){
            cin >> a[j] ;
        }
        int cou = 0 ;
        FOR(j, 0, m-1){
            FOR(k, j, m-1){
                if ( a[j] > a[k+1] ){
                    //swap(a[j],a[k+1]) ;
                    cou++ ;
                }
            }
        }
        cout << "Optimal train swapping takes " << cou << " swaps." << endl ;
    }
    return 0 ;
}
