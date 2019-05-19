#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    while ( cin >> n && n != 0 ){
        vi H(10001) ;
        FOR(i, 1, n+1){
            cin >> H[i] ;
        }
        int cou = 0 ;
        H[0] = H[n] ;
        H[n+1] = H[1] ;
        for(int i = 1 ; i <= n ; i++){
            if ( (H[i]-H[i-1])*(H[i]-H[i+1]) > 0 ) {
                cou++ ;
            }
        }
        cout << cou << endl ;
    }
    return 0 ;
}

