#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

char digit(char n){
    if ( n == 'W' ) return 'Q' ;
    else if ( n == 'S' ) return 'A' ;
    else if ( n == 'X' ) return 'Z' ;
    else if ( n == 'E' ) return 'W' ;
    else if ( n == 'D' ) return 'S' ;
    else if ( n == 'C' ) return 'X' ;
    else if ( n == 'R' ) return 'E' ;
    else if ( n == 'F' ) return 'D' ;
    else if ( n == 'V' ) return 'C' ;
    else if ( n == 'T' ) return 'R' ;
    else if ( n == 'G' ) return 'F' ;
    else if ( n == 'B' ) return 'V' ;
    else if ( n == 'Y' ) return 'T' ;
    else if ( n == 'H' ) return 'G' ;
    else if ( n == 'N' ) return 'B' ;
    else if ( n == 'U' ) return 'Y' ;
    else if ( n == 'J' ) return 'H' ;
    else if ( n == 'M' ) return 'N' ;
    else if ( n == 'I' ) return 'U' ;
    else if ( n == 'K' ) return 'J' ;
    else if ( n == '<' ) return 'M' ;
    else if ( n == 'O' ) return 'I' ;
    else if ( n == 'L' ) return 'K' ;
    else if ( n == '>' ) return 'M' ;
    else if ( n == 'P' ) return 'O' ;
    else if ( n == ';' ) return 'L' ;
    else if ( n == '/' ) return '.' ;
    else if ( n == '.' ) return ',' ;
    else if ( n == '[' ) return 'P' ;
    else if ( n == ']' ) return '[' ;
    else if ( n == '\\') return ']' ;
    else if ( n == ';' ) return 'L' ;
    else if ( n == ',' ) return 'M' ;
    else if ( n == '1' ) return '`' ;
    else if ( n == '2' ) return '1' ;
    else if ( n == '3' ) return '2' ;
    else if ( n == '4' ) return '3' ;
    else if ( n == '5' ) return '4' ;
    else if ( n == '6' ) return '5' ;
    else if ( n == '7' ) return '6' ;
    else if ( n == '8' ) return '7' ;
    else if ( n == '9' ) return '8' ;
    else if ( n == '0' ) return '9' ;
    else if ( n == '-' ) return '0' ;
    else if ( n == '=' ) return '-' ;
    else if ( n == '\'' ) return ';' ;
    else if ( n == ' ' ) return ' ' ;
    else if ( n == '\n' ) return '\n' ;
    return ' ' ;
}

int main() {
    char str ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( scanf("%c", &str) != EOF ){
        //FOR(i, 0, str.length()){
            str = digit(str) ;
            cout << str ;
        //}

    }
    return 0 ;
}




