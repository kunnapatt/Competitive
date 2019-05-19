#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    string str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n >> str && n != 0 ){
        int temp = n ;
        string ans = "" ;
        int cou = str.length()/n ;
        for(int i = 0 ; i < str.length() ; i+=cou){
            for(int j = i+cou-1 ; j >= i ; j--){
                ans += str[j] ;
            }
        }
        cout << ans << endl ;
    }
    return 0 ;
}



