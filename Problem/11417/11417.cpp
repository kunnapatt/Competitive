#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

 int functiongcd(int n){
    int sum = 0 ;
    FOR(i, 1, n){
        FOR(j, i+1, n+1){
            sum += __gcd(i, j) ;
        }
    }
    return sum ;
 }

int main() {
    int n ;
    while ( cin >> n && n != 0 ){
        cout << functiongcd(n) << endl ;
    }
    return 0;
}



