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
    while ( cin >> n  && n != 0 ){
        string card[n] ;
        string ptype, type ;
        int idcard = 0 ;
        FOR(i, 0, n){
            cin >> ptype >> type ;
            int len = type.length() ;
            while ( len > 0 ){
                if ( card[idcard] == ""){
                    len-- ;
                }
                idcard++ ;
                if ( idcard >= n ){
                    idcard = 0 ;
                }
            }
            card[(idcard-1+n)%n] = ptype ;
        }
        FOR(i, 0, n){
            cout << card[i] ;
            if ( i != n-1 ){
                cout << " " ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}


