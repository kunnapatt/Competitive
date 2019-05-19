#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    int sum = 0 ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while (cin >> n ){
        sum = n ;
        while ( n >= 3 ){
        sum += n/3 ;
        n = n/3 + n%3 ;
        }
        if ( n == 2 ){
            sum++ ;
        }
        cout << sum << endl ;
    }

    return 0 ;
}
