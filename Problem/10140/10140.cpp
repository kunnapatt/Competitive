#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

bool isprime(int n){
    for(int i = 2 ; i * i <= n ; i++){
        if ( n % i == 0 ){
            return false ;
        }
    }
    return true ;
}

int main(){
    long L, U ;
    freopen("../test.in", "r", stdin) ;
    freopen("../output.txt", "w", stdout) ;
    while ( cin >> L >> U && L >= 2 ){
        vii a ;
        if ( L != U ){
            for(long i = L ; i <= U ; i++){
                if (isprime(i)) {
                    a.push_back(i) ;
                }
            }
        }
        long closet = 10000000, inclo = 0 ;
        long distanct = -1, indis = 0 ;
        if ( a.empty() ){
            cout << "There are no adjacent primes.\n" ;
        }else {
            FOR(i, 1, a.size()){
                if ( a[i] - a[i-1] < closet ){
                    closet = a[i] - a[i-1] ;
                    inclo = i ;
                }
                if ( a[i] - a[i-1] > distanct ){
                    distanct = a[i] - a[i-1] ;
                    indis = i ;
                }
                //cout << a[i] << " " ;
            }
            //cout << endl ;
            //cout << inclo << " " << a[inclo] << " " << indis << endl ;
            cout << a[inclo-1] << "," << a[inclo] << " are closest, " << a[indis-1] << "," << a[indis] << " are most distant.\n" ;
            //printf("%d,%d are closest, %d,%d are most distant.\n", a[inclo-1], a[inclo], a[indis-1], a[indis]) ;
        }
    }
    return 0 ;
}








