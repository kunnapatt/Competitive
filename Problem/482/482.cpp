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
        cin.ignore() ;
        FOR(i, 0, n){
            cin.ignore() ;
            int ind[5000] ;
            string str ;
            string word[5000] ;
            int cou = 1, cou1 = 1 ;
            getline(cin, str) ;
            stringstream s ;
            s << str ;
            while ( s >> ind[cou] ){
                cou++ ;
            }

            str = "" ;
            s.clear() ;
            getline(cin, str) ;
            s << str ;
            while ( s >> word[ind[cou1]] ){
                cou1++ ;
            }
            FOR(i, 1, cou1){
                cout << word[i] ;
                cout << endl ;
            }
            if ( i != n-1 )
                cout << endl ;
            s.clear() ;
        }
    }
    return 0 ;
}


