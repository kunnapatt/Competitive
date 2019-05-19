#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    cin >> n ;
    FOR(i, 0, n){
        int m ;
        cin >> m ;
        int a[m+1] ;
        FOR(j, 0, m){
            cin >> a[j] ;
        }
        int hl = 0, lh = 0 ;
        FOR(j, 1, m){
            if ( a[j] > a[j-1] ){
                lh++ ;
            }else if ( a[j] < a[j-1] ){
                hl++ ;
            }
        }
        cout << "Case " << i+1 << ": " << lh << " " << hl << endl ;
    }
    return 0;
}
