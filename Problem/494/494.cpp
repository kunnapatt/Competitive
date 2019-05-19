#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( getline(cin, str) ){
        int ans = 0 ;
        bool ch = true ;
        FOR(i, 0, str.length()){
            if ( (str[i] >= 'A' && str[i] <= 'Z') || ( str[i] >= 'a' && str[i] <= 'z') ){
                if ( ch ){
                    ans++ ;
                }
                ch = false ;
            }else {
                ch = true ;
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}


