#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    string str ;
    string word = "`1234567890-=qwertyuiop[]asdfghjkl;'\\zxcvbnm,./";
    //freopen("../test.in", "r", stdin) ;
    while ( getline(cin, str) ){
        FOR(i, 0, str.length()) {
            if ( str[i] >= 'A' && str[i] <= 'Z' ){
                str[i] += 32 ;
            }
            if ( str[i] == ' ' || str[i] == '\n' ){
                cout << str[i] ;
            }else {
                FOR(j, 0, word.length()){
                    if ( str[i] == word[j] ){
                        cout << word[j-2] ;
                        break ;
                    }
                }
            }
        }
        cout << endl ;
    }
    return 0 ;
}





