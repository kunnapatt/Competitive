#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    string ans = "", temp ;
    while ( cin >> str ){
        for(int i = str.length()-1 ; i >= 0 ; i++){
            ans = (ans[i] - '0') + (str[i] - '0') ;
        }
        cout << ans << endl ;
    }
    return 0 ;
}


