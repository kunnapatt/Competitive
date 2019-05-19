#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

long f91(long n){
    if ( n >= 101 ){
        return n - 10 ;
    }else {
        return f91(f91(n + 11)) ;
    }
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && n != 0 ){
        cout << "f91(" << n << ") = " << f91(n) << endl ;
    }
    return 0 ;
}
