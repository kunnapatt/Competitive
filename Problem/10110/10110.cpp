#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    long n ;
    while ( cin >> n && n != 0 ){
        long root = sqrt(n) ;
        if ( n == root * root ){
            cout << "yes" << endl ;
        }else {
            cout << "no" << endl ;
        }
    }
    return 0 ;
}

