#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n ){
        string str[16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"} ;
        string people[n] ;
        FOR(i, 0, n){
            cin >> people[i] ;
        }
        if ( n - 16 > 0 ){
            int cou = 0 ;
            int div = n/16 ;
            FOR(i, 0, div){
                FOR(j, 0, 16){
                    cout << people[cou%n] << ": " << str[j] << endl ;
                    cou++ ;
                }
            }
            if ( n % 16 != 0 ){
                int mo = n%16 ;
                FOR(i, 0, mo){
                    cout << people[cou%n] << ": " << str[i] << endl ;
                    cou++ ;
                }
                FOR(i, mo, 16){
                    cout << people[cou%n] << ": " << str[i] << endl ;
                    cou++ ;
                }
            }
        }else {
            FOR(i, 0, 16){
                cout << people[i%n] << ": " << str[i] << endl ;
            }
        }
    }
    return 0;
}



