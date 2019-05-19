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
    while( cin >> str ){
        if ( str == "0" ){
            break ;
        }
        int sum = 0 ;
        FOR(i, 0, str.length()){
            int digi = str[i] - '0' ;
            sum += (digi*(pow(2, str.length()-i)-1)) ;
        }
        cout << sum << endl ;
    }
    return 0 ;
}
