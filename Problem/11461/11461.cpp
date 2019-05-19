#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int l, u ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> l >> u && ( l != 0 && u != 0 ) ){
        int cou = 0 ;
        for(int i = l ; i <= u ; i++){
            int a = sqrt(i) ;
            if ( a*a == i ){
                cou++ ;
            }
        }
        cout << cou << endl ;
    }
    return 0 ;
}



