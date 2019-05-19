#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>

int main() {
    string str ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> str ){
        //cin >> str ;
        //string out1 ;
        char end1 = '0', out ;
        FOR(i, 0, str.length()){
            if ( str[i] == 'B' || str[i] == 'F' || str[i] == 'P' || str[i] == 'V' ){
                out = '1' ;
            }else if ( str[i] == 'C' || str[i] == 'G' || str[i] == 'J' || str[i] == 'K' || str[i] == 'Q' || str[i] == 'S' || str[i] == 'X' || str[i] == 'Z' ){
                out = '2' ;
            }else if ( str[i] == 'D' || str[i] == 'T' ){
                out = '3' ;
            }else if ( str[i] == 'L' ){
                out = '4' ;
            }else if ( str[i] == 'M' || str[i] == 'N' ){
                out = '5' ;
            }else if ( str[i] == 'R' ){
                out = '6' ;
            }else {
                out = '0' ;
            }
            if ( out != end1 && out != '0' ){
                cout << out ;
            }
            end1 = out ;
        }
        cout << "\n" ;
    }
    return 0 ;
}
