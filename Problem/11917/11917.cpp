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
    while ( cin >> n ){
        int m ;
        FOR(i, 0, n){
            cin >> m ;
            map<string, int> mm ;
            int doi[m] ;
            FOR(j, 0, m){
                string str ;
                int in ;
                cin >> str >> in ;
                mm[str] = in ;
            }
            string sub ;
            int day ;
            cin >> day >> sub ;
            bool ch = false ;
            if ( mm.count(sub) ){
                if ( mm[sub] <= day ){
                    cout << "Case " << i+1 << ": Yesss\n" ;
                    ch = true ;
                }else if ( mm[sub] > day ) {
                    if ( mm[sub] <= day + 5 ) {
                        cout << "Case " << i+1 << ": Late\n" ;
                        ch = true ;
                    }
                }
            }
            if ( !ch ){
                    cout << "Case " << i+1 << ": Do your own homework!\n" ;
            }
        }
    }
    return 0 ;
}
