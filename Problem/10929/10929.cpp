#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> str && str != "0" ){
        int sign = 1, sum = 0 ;
        FOR(i, 0, str.length()){
            sum += ( sign * ( str[i] - '0' ) ) ;
            sign*=-1 ;
        }
        if ( sum % 11 == 0 ){
            cout << str << " is a multiple of 11.\n" ;
        }else {
            cout << str << " is not a multiple of 11.\n" ;
        }
    }
    return 0 ;
}
