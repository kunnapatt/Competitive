#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define long long long

int main() {
    int n ;
    //freopen("../test.in", "r", stdin) ;
    while ( cin >> n ){
        cin.ignore() ;
        FOR(i, 0, n){
            string str ;
            getline(cin, str) ;
            //cout << str << endl ;
            int male = 0, female = 0 ;
            FOR(j, 0, str.length()){
                if ( str[j] == 'M' ){
                    male++ ;
                }else if ( str[j] == 'F' ){
                    female++ ;
                }
            }
            if ( str.length() == 2 ){
                cout << "NO LOOP" << endl ;
            }else if ( male == female ){
                cout << "LOOP" << endl ;
            }else {
                cout << "NO LOOP" << endl ;
            }
        }
    }
    return 0 ;
}
