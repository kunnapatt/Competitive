#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    char str1[1000000], str2[1000000] ;
    //freopen("../test.in", "r", stdin) ;
    while ( scanf("%s %s", str1, str2) == 2 ){
        int cou = 0, rem = 0 ;
        FOR(i, 0, strlen(str1)){
            FOR(j, rem, strlen(str2)){
                if ( str1[i] == str2[j] ){
                    cou++ ;
                    rem = j + 1 ;
                    break ;
                }
            }
        }
        if ( strlen(str1) == cou ){
            cout << "Yes" << endl ;
        }else {
            cout << "No" << endl ;
        }
    }
    return 0 ;
}

