#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    long n ;
   // freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >>  n ){
        long a, b, c ;
        FOR(i, 0, n){
            cin >> a >> b >> c ;
            if ( a <= 0 || b <= 0 || c <= 0 ){
                cout << "Case " << i+1 << ": Invalid\n" ;
            }else if ( a + b <= c || a + c <= b || b + c <= a ){
                cout << "Case " << i+1 << ": Invalid\n" ;
            }else if ( a == b && a == c ){
                cout << "Case " << i+1 << ": Equilateral\n" ;
            }else if ( a == b || a == c || b == c ){
                cout << "Case " << i+1  << ": Isosceles\n" ;
            }else {
                cout << "Case " << i+1 << ": Scalene\n" ;
            }
        }
    }
    return 0;
}
