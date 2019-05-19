#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n, m ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> m ){
        int sum = n ;
        int rem = 0 ;
        while ( n/m >= 1 ) {
            sum += n/m ;
            rem = n%m ;
            n = n/m + rem ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}




