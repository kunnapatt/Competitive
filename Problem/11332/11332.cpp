#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

long cal(string str){
    int suma = 0 ;
    if ( str.length() == 1 ){
        int ans = stoll(str) ;
        return ans ;
    }else {
        FOR(i, 0, str.length()){
            int digit = str[i] - '0' ;
            suma += digit ;
        }
        return cal(to_string(suma)) ;
    }
}

int main() {
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> str && str != "0" ){
        cout << cal(str) << endl ;
    }
    return 0 ;
}


