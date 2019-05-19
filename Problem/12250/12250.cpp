#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)

int main() {
    string str, out ;
    int cou = 1 ;
    //freopen("test.in", "r", stdin) ;
    while ( cin >> str && str != "#" ) {
        if ( str == "HELLO" ){
            out = "ENGLISH" ;
        }else if ( str == "HOLA" ){
            out = "SPANISH" ;
        }else if ( str == "BONJOUR" ){
            out = "FRENCH" ;
        }else if ( str == "HALLO" ){
            out = "GERMAN" ;
        }else if ( str == "CIAO" ){
            out = "ITALIAN" ;
        }else if ( str == "ZDRAVSTVUJTE" ){
            out = "RUSSIAN" ;
        }else {
            out = "UNKNOWN" ;
        }
        cout << "Case " << cou << ": " << out << endl ;
        cou++ ;
    }
    return 0 ;
}
