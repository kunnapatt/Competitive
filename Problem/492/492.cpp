#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    char cha ;
    char temp ;
    //freopen("../test.in", "r", stdin) ;
    while ( scanf("%c", &cha) == 1 ){
        if ( 'A' == cha || 'a' == cha || 'E' == cha || cha == 'e' || cha == 'I' || cha == 'i' || cha == 'o' || cha == 'O' || cha == 'U' || cha == 'u' ){
            cout << cha ;
            while ( scanf("%c", &cha) == 1 ){
                if ( isalpha(cha) == 0 ){
                    //cout << " " ;
                    break ;
                }
                cout << cha ;
            }
            cout << "ay" << cha ;
        }else if ( isalpha(cha) ){
            temp = cha ;
            while ( scanf("%c", &cha) ) {
                if ( isalpha(cha) == 0 ){
                    //cout << " " ;
                    break ;
                }
                cout << cha ;
            }
            cout << temp << "ay" << cha ;
        }else {
            cout << cha ;
        }
    }
    return 0 ;
}





