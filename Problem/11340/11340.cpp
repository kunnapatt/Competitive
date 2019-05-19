#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    //freopen("../test.in", "r", stdin) ;
    //freopen("../output.txt", "w", stdout) ;
    while ( cin >> n && n != 0 ){
        FOR(i, 0, n){
            long m ;
            cin >> m ;
            vii pay(m) ;
            char chapay[m] ;
            FOR(i, 0, m){
                cin >> chapay[i] >> pay[i] ;
            }
            int line ;
            long sum = 0 ;
            cin >> line ;
            string lines ;
            cin.ignore() ;
            FOR(i, 0, line){
                getline(cin, lines) ;
                FOR(j, 0, lines.length()){
                    FOR(k, 0, m){
                        if ( lines[j] == chapay[k] ){
                            sum += pay[k] ;
                            break ;
                        }
                    }
                }
            }
            printf("%lld.%02lld$\n", sum/100, sum%100) ;
        }
        //cout << sum << endl ;
    }
    return 0 ;
}


