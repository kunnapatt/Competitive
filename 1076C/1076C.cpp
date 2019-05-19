#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

int main(){
    int n ;
    while ( cin >> n ){
        int m ;
        FOR(i, 0, n){
            cin >> m ;
            if ( m == 1 || m == 2 || m == 3 ){
                cout << "N" << endl ;
            }else {
                double a, b ;
                b = (m - sqrt(pow(m, 2) - 4*m))/2 ;
                a = m - b ;
                printf("Y %.20f %.20f\n", a, b) ;
            }
        }
    }
    return 0 ;
}

