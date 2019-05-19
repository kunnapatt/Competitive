#include <bits/stdc++.h>

using namespace std ;

#define FOR(i, a, b) for(int i = a ; i < b ; i++)
#define vi vector<int>
#define vii vector<long>
#define long long long

int main(){
    int n ;
    while ( cin >> n && n != 0 ){
        cin.ignore() ;
        FOR(i, 0, n){
            string str ;
            getline(cin, str) ;
            stringstream s(str) ;
            vi a(100) ;
            string word ;
            int cou = 0 ;
            while ( s >> word ){
                a[cou] = stoi(word) ;
                cou++ ;
            }
            int ans = -1 ;
            FOR(i, 0, cou){
                FOR(j, i+1, cou){
                    ans = max(ans, __gcd(a[i], a[j])) ;
                }
            }
            cout << ans << endl ;
        }
    }
    return 0;
}
