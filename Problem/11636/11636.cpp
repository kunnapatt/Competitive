#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    int cou = 0 ;
    while ( cin >> n && n > 0 && n < 10001 ){
        int ans = 0 ;
        FOR(i, 0, n){
            if ( pow(2, i) >= n ){
                ans = i ;
                break ;
            }
        }
        cout << "Case " << cou+1 << ": " << ans << endl ;
        cou++ ;
    }
    return 0;
}
