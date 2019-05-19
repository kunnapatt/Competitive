#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
//#define long long long

long long lookup[5001] ;

long fibo(int n){
    if ( lookup[n] == -1 ){
        if ( n == 0 ) lookup[n] = 0 ;
        if ( n == 1 ) lookup[n] = 1 ;
        else lookup[n] = fibo(n-1) + fibo(n-2) ;
    }
    return lookup[n] ;
}

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        FOR(i, 0, n){
            int m ;
            cin >> m ;
            int cou = 0 ;
            int temp = m ;

            while ( m > 0 ){
                if ( m >> 1 & 1 ){
                    cou++ ;
                }
                m = m >> 1 ;
            }
            if ( temp % 2 != 0 ){
                cou+=1 ;
            }
            string str = to_string(temp) ;
            int cou2 = 0 ;
            FOR(i, 0, str.length()){
                if ( str[i] == '1' ) cou2++ ;
                else if ( str[i] == '2' ) cou2++ ;
                else if ( str[i] == '3' ) cou2+=2 ;
                else if ( str[i] == '4' ) cou2++ ;
                else if ( str[i] == '5' ) cou2+=2 ;
                else if ( str[i] == '6' ) cou2+=2 ;
                else if ( str[i] == '7' ) cou2+=3 ;
                else if ( str[i] == '8' ) cou2++ ;
                else if ( str[i] == '9' ) cou2+=2 ;
            }
            cout << cou << " " << cou2 << endl ;
        }
    }
    return 0 ;
}

