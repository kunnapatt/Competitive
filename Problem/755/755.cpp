#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        FOR(i, 0, n) {
            int m ;
            cin >> m ;
            string str ;
            map<string, int> mm ;
            FOR(i, 0, m){
                cin >> str ;
                string str2 = "" ;
                FOR(i, 0, str.length()){
                    if ( str[i] >= 'A' && str[i] <= 'Z' ){
                        if ( str[i] == 'A' || str[i] == 'B' || str[i] == 'C' ){
                            str2 += '2' ;
                        }else if ( str[i] == 'D' || str[i] == 'E' || str[i] == 'F' ) {
                            str2 += '3' ;
                        }else if ( str[i] == 'G' || str[i] == 'H' || str[i] == 'I' ) {
                            str2 += '4' ;
                        }else if ( str[i] == 'J' || str[i] == 'K' || str[i] == 'L' ) {
                            str2 += '5' ;
                        }else if ( str[i] == 'M' || str[i] == 'N' || str[i] == 'O' ) {
                            str2 += '6' ;
                        }else if ( str[i] == 'P' || str[i] == 'R' || str[i] == 'S' ) {
                            str2 += '7' ;
                        }else if ( str[i] == 'T' || str[i] == 'U' || str[i] == 'V' ) {
                            str2 += '8' ;
                        }else if ( str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' ) {
                            str2 += '9' ;
                        }
                    }else if ( str[i] >= '0' && str[i] <= '9' ){
                        str2+=str[i] ;
                    }
                }
                mm[str2]++ ;
            }
            bool ch = false ;
            for(auto a:mm){
                if ( a.second != 1 ){
                    for(int i = 0 ; i < a.first.length() ; i++){
                        if ( i == 3 ) cout << "-" ;
                        cout << a.first[i] ;
                        ch = true ;
                    }
                    cout << " " << a.second << endl ;
                }
            }
            if ( ch == false ){
                cout << "No duplicates.\n" ;
            }
            if ( i != n-1 ){
                cout << endl ;
            }

        }

    }

    return 0 ;
}


