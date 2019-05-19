#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main(){
    int n, m ;
    //freopen("test.in", "r", stdin) ;
    cin >> n >> m ;
    string str ;
    int ans = 0 ;
    FOR(i, 0, n){
        char a ;
        cin >> a ;
        str += a ;
        if (str[i] == '.' && str[i-1] == '.') {
            ans++ ;
        }
    }
    //cout << str << endl ;

    FOR(i, 0, m){
        int pos ;
        char cha ;
        cin >> pos >> cha ;
        pos-- ;

        if (str[pos] != '.' && cha == '.'){
            ans += (str[pos+1] == '.') + (str[pos-1] == '.') ;
        }
        if (str[pos] == '.' && cha != '.'){
            ans -= (str[pos-1] == '.') + (str[pos+1] == '.') ;
        }
        str[pos] = cha ;
        cout << ans << endl ;
    }

    return 0 ;
}
