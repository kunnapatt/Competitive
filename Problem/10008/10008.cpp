#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    int cha[26] ;
    memset(cha, 0, sizeof(cha)) ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        cin.ignore() ;
        FOR(i, 0, n){
            string str ;
            getline(cin ,str) ;
            transform(str.begin(), str.end(), str.begin(), ::tolower) ;
            FOR(i, 0, str.length()){
                if ( str[i] >= 'a' && str[i] <= 'z' ){
                    cha[str[i]-97]++ ;
                }
            }
        }
        int ma = -1 ;
        FOR(i, 0, 26){
            ma = max(ma, cha[i]) ;
        }
        while(true){
            FOR(i, 0, sizeof(cha)/sizeof(cha[0])){
                if (ma == cha[i]){
                    printf("%c %d\n", i+65, cha[i]) ;
                }
            }
            ma-- ;
            if ( ma == 0 ){
                break ;
            }
        }

    }
    return 0 ;
}

