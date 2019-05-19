#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    while ( cin >> str ){
        long ans = 0 ;
        FOR(i, 0, str.length()){
            if ( (str[i] - '0') % 4 == 0 ){
                ans++ ;
            }
        }
        FOR(i, 1, str.length()){
            int a = (str[i-1] - '0')*10 + (str[i] - '0') ;
            if ( a % 4 == 0 ){
                ans += i ;
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}
