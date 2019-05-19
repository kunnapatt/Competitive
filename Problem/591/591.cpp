#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    int cou = 1 ;
    while ( cin >> n && n != 0 ) {
        vi a(n) ;
        int sum = 0 ;
        FOR(i, 0, n){
            cin >> a[i] ;
            sum += a[i] ;
        }
        //cout << sum << ", " << n << endl ;
        int mean = sum/n ;
        int mov = 0 ;
        FOR(i, 0, n){
            if ( a[i] < mean ){
                mov += (mean - a[i]) ;
            }
            //cout << mov << endl ;
        }
        cout << "Set #" << cou << endl ;
        cout << "The minimum number of moves is " << mov << ".\n\n" ;
        cou++ ;
    }
    return 0 ;
}



