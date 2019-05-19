#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    long n ;
    while ( cin >> n ){
        n = (n/2) + 1 ;
        long num = 2*(n*n) - 1 ;
        long sum = 3*num - 6 ;
        cout << sum << endl ;
    }
    return 0;
}
