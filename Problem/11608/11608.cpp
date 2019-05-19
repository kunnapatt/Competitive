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
    int cou = 0 ;
    while ( cin >> n && n >= 0 ) {
        vi have(13), use(12) ;
        FOR(i, 1, 13){
            cin >> have[i] ;
        }
        FOR(i, 0, 12){
            cin >> use[i] ;
        }
        cout << "Case " << cou+1 << ":" << endl ;
        have[0] = n ;
        FOR(i, 0, 12){
            if ( have[i] - use[i] >= 0 ){
                cout << "No problem! :D\n" ;
                have[i] -= use[i] ;
            }else {
                cout << "No problem. :(\n" ;
                //have[i] = 0 ;
            }
            //cout << "have = " << have[i] << ", " << use[i] << endl ;
            //if ( i != 0 )
                have[i+1] += have[i] ;
        }
        cou++ ;
    }
    return 0 ;
}





